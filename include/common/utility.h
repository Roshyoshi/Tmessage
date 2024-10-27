#pragma once
// TODO prototype utility functions

#include <functional>
#include <vector>
#include <thread>
#include <queue>
#include <mutex>
#include <condition_variable>
#include <string>
#include <sys/socket.h>
#include <iostream>

class ThreadPool
//Class to create a thread pool, used in the server to handle multiple clients
{
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

struct TextMessage
{
    std::string message;
    std::string recipient;
};

struct ClientRequest
{
    std::string sender;
    std::string instruction;
    TextMessage *message = nullptr;
};

struct ServerResponse
{
    std::string instruction;
    std::string information;
};
template <typename T>

std::string serializeProto(T *data);

template <typename T>

T *deserializeProto(std::string data);

std::string get_request(int clientSocket);

