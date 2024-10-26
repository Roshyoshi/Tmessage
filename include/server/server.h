#ifndef SERVER_H
#define SERVER_H


#include <iostream>
#include <cstring>
#include <sys/types.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <sys/wait.h>


struct clients {
    int clientSocket;
    struct sockaddr_storage their_addr;
    socklen_t sin_size;
    char *name;
};

void handle_client(int clientSocket);

char *get_request(int clientSocket);
#endif
