#include <gtest/gtest.h>
#include "common/utility.h"

TEST(ExampleTest, SampleTest){
    ASSERT_EQ(1, 1);
}

// Test the ThreadPool class
TEST(ThreadPool, SingleTask){
    ThreadPool pool(1);
    std::atomic<bool> taskExecuted(false);

    pool.Enqueue([&taskExecuted] {
        taskExecuted = true;
    });

    while(1){
        if(pool.isIdle()){
            break;
        }
    }

    EXPECT_TRUE(static_cast<bool>(taskExecuted));
    }

TEST(ThreadPool, MultipleTasks){
    ThreadPool pool(2);
    std::atomic<int> counter(0);

    for(int i = 0; i < 10; i++){
        pool.Enqueue([&counter] {
            counter++;
        });
    }

    while(1){
        if(pool.isIdle()){
            break;
        }
    }

    EXPECT_EQ(counter, 10);
}

int main(int argc, char **argv){
    ::testing::InitGoogleTest( &argc, argv);
    return RUN_ALL_TESTS();
}