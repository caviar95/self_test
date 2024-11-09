/*
 * @Author: Caviar
 * @Date: 2024-11-09 09:14:48
 * @LastEditors: Caviar
 * @LastEditTime: 2024-11-09 10:24:52
 * @Description: 
 */
// #include "../include/get_min.h"
#include "get_min.h"

#include <gtest/gtest.h>
#include <vector>

TEST(GetMin, Case_1)
{
    MinStack test_stack{};

    vector<int> src{3, 4, 5, 1, 2, 1};
    vector<int> target{1, 1, 1, 3, 3, 3};

    for (auto i : src) {
        test_stack.Push(i);
    }

    for (auto i = 0; i < src.size(); ++i) {
        EXPECT_EQ(test_stack.GetMin(), target[i]);
        test_stack.Pop();
    }
}
