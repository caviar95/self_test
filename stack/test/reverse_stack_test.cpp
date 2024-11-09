/*
 * @Author: Caviar
 * @Date: 2024-11-09 16:50:24
 * @LastEditors: Caviar
 * @LastEditTime: 2024-11-09 17:09:27
 * @Description: 
 */

#include "reverse_stack.h"

#include <gtest/gtest.h>

TEST(ReverseStack, Case_1)
{
    stack<int> sta{};
    sta.push(1);
    sta.push(2);
    sta.push(3);

    EXPECT_EQ(GetAndRemoveLastElement(sta), 1);
    EXPECT_EQ(GetAndRemoveLastElement(sta), 2);
    EXPECT_EQ(GetAndRemoveLastElement(sta), 3);
}

TEST(ReverseStack, Case_2)
{
    stack<int> sta{};
    sta.push(1);
    sta.push(2);

    GetAndRemoveLastElement_Version2(sta);

    EXPECT_EQ(sta.top(), 1);
    sta.pop();
    EXPECT_EQ(sta.top(), 2);
    sta.pop();

    EXPECT_EQ(sta.empty(), true);
}
