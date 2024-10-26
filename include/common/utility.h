#ifndef UTILITY_H
#define UTILITY_H
//TODO prototype utility functions 

#include <functional>
#include <vector>
#include <thread>
#include <queue>
#include <mutex>
#include <condition_variable>
#include <string>

class ThreadPool {
    public:
        ThreadPool(size_t numThreads);
        ~ThreadPool();
        void Enqueue(std::function<void()> func);
        bool isIdle();
        private:
            std::vector<std::thread> threads;
            std::queue<std::function<void()>> tasks;
            std::mutex queueMutex;
            std::condition_variable condition;
            bool stop;
};


struct TextMessage {
    std::string message;
    std::string recipient;
};

struct ClientRequest {
    std::string sender;
    std::string instruction;
    TextMessage *message = NULL;
};

struct ServerRequest {
    std::string instruction;
    std::string information;
};


std::string serializeClientRequest(ClientRequest *req);
ClientRequest *deserializeClientRequest(std::string req);

std::string serializeServerRequest(ServerRequest *req);
ServerRequest *deserializeServerRequest(std::string req);


#endif
