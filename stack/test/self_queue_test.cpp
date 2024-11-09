/*
 * @Author: Caviar
 * @Date: 2024-11-09 10:42:31
 * @LastEditors: Caviar
 * @LastEditTime: 2024-11-09 10:49:04
 * @Description: 
 */

#include "self_queue.h"

#include <gtest/gtest.h>
#include <vector>

using std::vector;

TEST(SelfQueue, Case_1)
{
    SelfQueue que{};

    vector<int> target{1, 2, 3, 4, 5, 6};

    que.Push(1);
    que.Push(2);
    EXPECT_EQ(que.Pop(), 1);

    que.Push(3);
    EXPECT_EQ(que.Pop(), 2);
    EXPECT_EQ(que.Pop(), 3);

    que.Push(4);
    que.Push(5);
    EXPECT_EQ(que.Pop(), 4);
    EXPECT_EQ(que.Pop(), 5);    
}