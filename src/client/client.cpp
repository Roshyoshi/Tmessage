#include "client/client.h"

int main() {
    //TODO: implement client logic
    int sockfd;
    struct addrinfo hints, *servinfo, *p;

    std::memset(&hints, 0, sizeof hints);
    hints.ai_family = AF_UNSPEC;
    hints.ai_socktype = SOCK_STREAM;

    std::cout << "Enter the server IP address: ";
    std::string serverIP;
    std::cin >> serverIP;

    std::cout << "Enter the server port number: ";
    std::string serverPort;
    std::cin >> serverPort;

    if (int status = getaddrinfo(serverIP.c_str(), serverPort.c_str(), &hints, &servinfo) != 0) {
        std::cerr << "getaddrinfo: Invalid Server " << gai_strerror(status) << std::endl;
        return 1;
    }


    // Loop through all the results and connect to the first we can
    for (p = servinfo; p != NULL; p = p->ai_next) {

        if (sockfd = socket(p->ai_family, p->ai_socktype, p->ai_protocol) == -1) {
            std::cerr << "client: socket failed" << std::endl;
            continue;
        }

        if (connect(sockfd, p->ai_addr, p->ai_addrlen) == -1) {
            std::cerr << "client: connect failed" << std::endl;
            continue;
        }

        break;
    }

    if (p == NULL) {
        std::cerr << "client: failed to connect" << std::endl;
        return 2;
    }

    freeaddrinfo(servinfo);

    std::cout << "Connected to the server" << std::endl;
    std::cout << "Enter your name: ";
    std::string name;
    std::cin >> name;

    send(sockfd, name.c_str(), name.size(), 0);

    std::thread sendThread(sendMessage, sockfd, name);
    std::thread receiveThread(receiveMessage, sockfd);

    sendThread.join();
    receiveThread.join();

    return 0;

}


void sendMessage(int sockfd, std::string name){

}

void receiveMessage(int sockfd){

}


/*
+-------------------+
| struct addrinfo   |
|-------------------|
| ai_flags          |--> Control flags (e.g., AI_PASSIVE)
| ai_family         |--> Address family (AF_INET, AF_INET6)
| ai_socktype       |--> Socket type (SOCK_STREAM, SOCK_DGRAM)
| ai_protocol       |--> Protocol (0 for any)
| ai_addrlen        |--> Length of ai_addr
| ai_addr           |--> Pointer to socket address
| ai_canonname      |--> Canonical hostname
| ai_next           |--> Pointer to next addrinfo (linked list)
+-------------------+

struct addrinfo {
    int              ai_flags;     // AI_PASSIVE, AI_CANONNAME, etc.
    int              ai_family;    // AF_INET, AF_INET6, AF_UNSPEC
    int              ai_socktype;  // SOCK_STREAM, SOCK_DGRAM
    int              ai_protocol;  // use 0 for "any"
    size_t           ai_addrlen;   // size of ai_addr in bytes
    struct sockaddr *ai_addr;      // struct sockaddr_in or _in6
    char            *ai_canonname; // full canonical hostname

    struct addrinfo *ai_next;      // linked list, next node
};

struct sockaddr {
    unsigned short    sa_family;    // address family, AF_xxx
    char              sa_data[14];  // 14 bytes of protocol address
};

... can be cast to either

//IPv4

struct sockaddr_in {
    short int          sin_family;  // Address family, AF_INET
    unsigned short int sin_port;    // Port number
    struct in_addr     sin_addr;    // Internet address
    unsigned char      sin_zero[8]; // Same size as struct sockaddr
};

// Internet address (a structure for historical reasons)
struct in_addr {
    uint32_t s_addr; // that's a 32-bit int (4 bytes)
};

//IPv6

struct sockaddr_in6 {
    u_int16_t       sin6_family;   // address family, AF_INET6
    u_int16_t       sin6_port;     // port number, Network Byte Order
    u_int32_t       sin6_flowinfo; // IPv6 flow information
    struct in6_addr sin6_addr;     // IPv6 address
    u_int32_t       sin6_scope_id; // Scope ID
};

struct in6_addr {
    unsigned char   s6_addr[16];   // IPv6 address
};

// Storage for both IPv6 and IPv4
struct sockaddr_storage {
    sa_family_t  ss_family;     // address family

    // all this is padding, implementation specific, ignore it:
    char      __ss_pad1[_SS_PAD1SIZE];
    int64_t   __ss_align;
    char      __ss_pad2[_SS_PAD2SIZE];
};

use inet_pton to convert string to address
and inet_ntop to convert to printable  



int getaddrinfo(const char *node,     // e.g. "www.example.com" or IP
                const char *service,  // e.g. "http" or port number
                const struct addrinfo *hints,
                struct addrinfo **res);
*/

