#include <gtest/gtest.h>
#include "common/utility.h"

TEST(ExampleTest, SampleTest){
    ASSERT_EQ(1, 1);
}

TEST(Utility, ThreadPool){
    ThreadPool pool(4);

    std::vector<int> vec;
    for(int i = 0; i < 100; i++){
        pool.Enqueue([i, &vec]{
            vec.push_back(i);
        });
    }
    
    while (1){
        if(vec.size() == 100){
            break;
        }
    }
    

    ASSERT_EQ(vec.size(), 100);
    for(int i = 0; i < 100; i++){
        ASSERT_EQ(vec[i], i);
    }
}

int main(int argc, char **argv){
    ::testing::InitGoogleTest( &argc, argv);
    return RUN_ALL_TESTS();
}