#pragma once 

#include <iostream>
#include <cstring>
#include <sys/types.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <sys/wait.h>
#include <unordered_map>
#include "common/utility.h"

void handle_client(int clientSocket);


