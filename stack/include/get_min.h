/*
 * @Author: Caviar
 * @Date: 2024-11-09 09:01:50
 * @LastEditors: Caviar
 * @LastEditTime: 2024-11-09 10:21:15
 * @Description: 
 */
#pragma once

#include <stack>

using namespace std;

// 首先需要明确目标：借助两个栈实现具备最小栈功能的特殊栈组合
// 关键点: 1 两个stack
//        2 push时判断当前最小值
//        3 pop时 是否需要判断(省空间还是省时间)

class MinStack {
public:
    // 尽可能减少对外暴露接口
    void Push(int val);
    void Pop();
    int GetMin();

private:
    stack<int> data_{};
    stack<int> min_{};
};
