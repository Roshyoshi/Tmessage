#include "common/utility.h"

ThreadPool::ThreadPool(size_t numThreads) : stop(false) {

    // Create threads
    for (size_t i = 0; i < numThreads; i++) {

        // Create threads and add them list
        threads.emplace_back([this] {

            while (true) {

                // Create a task
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

// Add a task to the thread pool
void ThreadPool::Enqueue(std::function<void()> func) {
    {
        std::unique_lock<std::mutex> lock(queueMutex);
        tasks.push(func);
    }
    condition.notify_one();
}

// Check if the thread pool is idle
bool ThreadPool::isIdle() {
    std::unique_lock<std::mutex> lock(queueMutex);
    return tasks.empty();
}


// Destructor
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