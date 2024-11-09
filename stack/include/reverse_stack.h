/*
 * @Author: Caviar
 * @Date: 2024-11-09 16:44:45
 * @LastEditors: Caviar
 * @LastEditTime: 2024-11-09 17:17:44
 * @Description: 
 */

#pragma once

#include <stack>

using std::stack;

// step1: 将stack的栈底元素返回并移除
int GetAndRemoveLastElement(stack<int> &sta);

// step2: 逆序stack
void GetAndRemoveLastElement_Version2(stack<int> &sta);
