#include "common/utility.h"

ThreadPool::ThreadPool(size_t numThreads) : stop(false) {

    // Create threads
    for (size_t i = 0; i < numThreads; i++) {

        // Create threads and add them list
        threads.emplace_back([this] {

            while (true) {
                std::function<void()> task;

                {
                    std::unique_lock<std::mutex> lock(queueMutex);
                    condition.wait(lock, [this] { return stop || !tasks.empty(); });
                    if (stop && tasks.empty()) {
                        return;
                    }

                    task = tasks.front();
                    tasks.pop();
                }
                task();
            }
        });
    }
}


void ThreadPool::Enqueue(std::function<void()> func) {
    {
        std::unique_lock<std::mutex> lock(queueMutex);
        tasks.push(func);
    }
    condition.notify_one();
}

bool ThreadPool::isEmpty() {
    return tasks.empty();
}



ThreadPool::~ThreadPool() {
    {
        std::unique_lock<std::mutex> lock(queueMutex);
        stop = true;
    }
    condition.notify_all();
    
    // Join all threads
    for (std::thread &thread : threads) {
        thread.join();
    }
}