#include "server/server.h"
#include "common/utility.h"

int main() {
    //TODO: Server listening logic
    int sockfd, new_fd;
    struct addrinfo hints, *servinfo, *p;


    std::memset(&hints, 0, sizeof hints);
    hints.ai_family = AF_UNSPEC;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_flags = AI_PASSIVE;
    int yes = 1;


    if ( int status = getaddrinfo(NULL, "6000", &hints, &servinfo) != 0) {
        std::cerr << "getaddrinfo: " << gai_strerror(status) << std::endl;
        return 1;
    }

    // Loop through all the results and bind to the first we can
    for (p = servinfo; p != NULL; p = p->ai_next) {


        if ( sockfd = socket(p->ai_family, p->ai_socktype, p->ai_protocol) == -1) {
            std::cerr << "server: socket failed" << std::endl;
            continue;
        }

        if (setsockopt(sockfd, SOL_SOCKET, SO_REUSEADDR, &yes, sizeof(int)) == -1) {
            std::cerr << "setsockopt" << std::endl;
            return 1;
        }


        if (bind(sockfd, p->ai_addr, p->ai_addrlen) == -1) {
            close(sockfd);
            std::cerr << "server: bind failed" << std::endl;
            continue;
        }
        
    }

    freeaddrinfo(servinfo);
    
    listen(sockfd, 10);

    ThreadPool pool(4);

    // Accept a connection with separate threads
    while (true){
        struct sockaddr_storage their_addr;
        socklen_t sin_size;
        sin_size = sizeof their_addr;
        int clientSocket;

        if (clientSocket = accept(sockfd, (struct sockaddr *)&their_addr, &sin_size) == -1) {
            std::cerr << "server: accept failed" << std::endl;
            continue;
        }

        pool.Enqueue([clientSocket] {
            
        });

    }

    
    

    return 0;
}

void handle_client(int clientSocket){
    while (send(clientSocket, NULL, 0, 0) != -1){
        char *request = get_request(clientSocket);

        struct Request *req = (struct Request *)request;

        if (strcmp(req->instruction, "LIST") == 0){
    }


char *get_request(int clientSocket){
    char *buffer = new char[1024];
    int bytesReceived = recv(clientSocket, buffer, 1024, 0);

    // Deserializing the message


    if (bytesReceived == -1){
        std::cerr << "Error in recv()" << std::endl;
        return NULL;
    }

    return buffer;
}