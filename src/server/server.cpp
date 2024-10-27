#include "server/server.h"
#include "common/utility.h"

std::unordered_map<std::string, int> clients;
std::mutex clientsMutex;

int main()
{
    // TODO: Server listening logic
    int sockfd, new_fd;
    struct addrinfo hints, *servinfo, *p;

    std::memset(&hints, 0, sizeof hints);
    hints.ai_family = AF_UNSPEC;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_flags = AI_PASSIVE;
    int yes = 1;

    if (int status = getaddrinfo(NULL, "6000", &hints, &servinfo) != 0)
    {
        std::cerr << "getaddrinfo: " << gai_strerror(status) << std::endl;
        return 1;
    }

    // Loop through all the results and bind to the first we can
    for (p = servinfo; p != NULL; p = p->ai_next)
    {

        if (sockfd = socket(p->ai_family, p->ai_socktype, p->ai_protocol) == -1)
        {
            std::cerr << "server: socket failed" << std::endl;
            continue;
        }

        if (setsockopt(sockfd, SOL_SOCKET, SO_REUSEADDR, &yes, sizeof(int)) == -1)
        {
            std::cerr << "setsockopt" << std::endl;
            return 1;
        }

        if (bind(sockfd, p->ai_addr, p->ai_addrlen) == -1)
        {
            close(sockfd);
            std::cerr << "server: bind failed" << std::endl;
            continue;
        }
    }
    char ip[INET_ADDRSTRLEN];
    void *addr = &(((struct sockaddr_in *)(p->ai_addr))->sin_addr);

    std::cout << "Server is listening on port 6000 with ip: " << inet_ntop(AF_INET, addr, ip, INET_ADDRSTRLEN) << std::endl;

    freeaddrinfo(servinfo);

    listen(sockfd, 10);

    ThreadPool pool(4);
    

    // Accept a connection with separate threads
    while (true)
    {
        struct sockaddr_storage their_addr;
        socklen_t sin_size;
        sin_size = sizeof their_addr;
        int clientSocket;

        if (clientSocket = accept(sockfd, (struct sockaddr *)&their_addr, &sin_size) == -1)
        {
            std::cerr << "server: accept failed" << std::endl;
            continue;
        }

        // Add the client to the list of clients after receiving the name
        std::string clientName = get_request(clientSocket);
        std::lock_guard<std::mutex> lock(clientsMutex);
        clients[clientName] = clientSocket;
    

        pool.Enqueue([clientSocket] {
            handle_client(clientSocket);
        });
    }

    return 0;
}

void handle_client(int clientSocket)
{

    //Handle the client request
    while (send(clientSocket, NULL, 0, 0) != -1)
    {

        std::string res = get_request(clientSocket);
        ClientRequest *req = deserializeProto<ClientRequest>(res);

        const char *instruction = (req->instruction).c_str();

        if (strcmp(instruction, "LIST") == 0)
        {
            //Return a list of clients connected in string format to the client
            std::lock_guard<std::mutex> lock(clientsMutex);
            std::string clientList = "";
            for (auto it = clients.begin(); it != clients.end(); it++)
            {
                clientList += it->first + "\n";
            }


            ServerResponse *res = new ServerResponse();
            res->instruction = "DISPLAY";
            res->information= clientList;

            //Serealize the response and send it to the client
            std::string response = serializeProto(res);
            send(clientSocket, response.c_str(), response.size(), 0);
            delete res;
        }
        else if (strcmp(instruction, "SEND") == 0)
        {
            //TODO: Send a message to a client based on the name of the client in the request
        }

        delete req;
    }
}
