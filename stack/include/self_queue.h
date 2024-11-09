/*
 * @Author: Caviar
 * @Date: 2024-11-09 10:32:53
 * @LastEditors: Caviar
 * @LastEditTime: 2024-11-09 10:37:38
 * @Description: 
 */

#pragma once

#include <stack>

using std::stack;

class SelfQueue {
public:
    void Push(int val);
    int Pop();

private:
    stack<int> stack_in_{};
    stack<int> stack_out_{};

    void Flash();
};