#ifndef UTILITY_H
#define UTILITY_H
//TODO prototype utility functions 

#include <functional>
#include <vector>
#include <thread>
#include <queue>
#include <mutex>
#include <condition_variable>

class ThreadPool {
    public:
        ThreadPool(size_t numThreads);
        ~ThreadPool();
        void Enqueue(std::function<void()> func);
        bool ThreadPool::isEmpty();
        private:
            std::vector<std::thread> threads;
            std::queue<std::function<void()>> tasks;
            std::mutex queueMutex;
            std::condition_variable condition;
            bool stop;
};
#endif
