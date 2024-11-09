/*
 * @Author: Caviar
 * @Date: 2024-11-09 09:01:01
 * @LastEditors: Caviar
 * @LastEditTime: 2024-11-09 10:25:05
 * @Description: 
 */

// #include "../include/get_min.h"
#include "get_min.h"


void MinStack::Push(int val)
{
    if (data_.empty()) {
        data_.emplace(val);
        min_.emplace(val);
        return;
    }

    min_.emplace(min_.top() >= val ? val : min_.top());
    data_.emplace(val);
}

void MinStack::Pop()
{
    if (data_.empty() || min_.empty()) {
        return;
    }

    data_.pop();
    return min_.pop();
}

int MinStack::GetMin()
{
    if (min_.empty()) {
        return -1;
    }
    return min_.top();
}

