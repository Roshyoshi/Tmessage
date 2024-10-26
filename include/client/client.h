#ifndef CLIENT_H
#define CLIENT_H

//TODO: declare function prototypes for client
#include <iostream>
#include <cstring>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include "common/utility.h"

void sendMessage(int sockfd, std::string name);
void receiveMessage(int sockfd);
#endif
