/*
 * @Author: Caviar
 * @Date: 2024-11-09 10:36:51
 * @LastEditors: Caviar
 * @LastEditTime: 2024-11-09 11:47:20
 * @Description: 
 */

#include "self_queue.h"

void SelfQueue::Push(int val)
{
    stack_in_.push(val);

    Flash();
}

void SelfQueue::Flash()
{
    if (!stack_out_.empty()) {
        return;
    }

    while (!stack_in_.empty()) {
        stack_out_.push(stack_in_.top());
        stack_in_.pop();
    }
}

int SelfQueue::Pop()
{
    #if 0
    if (stack_out_.empty()) {
        if (stack_in_.empty()) {
            return -1;
        }

        Flash();
        auto val = stack_out_.top();
        stack_out_.pop();
        return val;
    }

    auto val = stack_out_.top();
    stack_out_.pop();
    return val;
    #endif

    #if 1
    if (stack_in_.empty() && stack_out_.empty()) {
        return -1;
    }

    Flash();
    auto val = stack_out_.top();
    stack_out_.pop();
    return val;
    #endif
}
