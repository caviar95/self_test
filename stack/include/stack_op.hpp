/*
 * @Author: Caviar
 * @Date: 2024-11-09 16:46:53
 * @LastEditors: Caviar
 * @LastEditTime: 2024-11-09 16:47:48
 * @Description: 
 */

#pragma once

#include <stack>

using std::stack;

int PopStack(stack<int> &sta)
{
    auto val = sta.top();
    sta.pop();
    return val;
}
