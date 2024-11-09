/*
 * @Author: Caviar
 * @Date: 2024-11-09 16:44:29
 * @LastEditors: Caviar
 * @LastEditTime: 2024-11-09 17:07:23
 * @Description: 
 */

#include "reverse_stack.h"

#include "stack_op.hpp"

int GetAndRemoveLastElement(stack<int> &sta)
{
    int result = PopStack(sta);
    if (sta.empty()) {
        return result;
    }

    int last = GetAndRemoveLastElement(sta);
    sta.push(result);
    return last;
}

void GetAndRemoveLastElement_Version2(stack<int> &sta)
{
    if (sta.empty()) {
        return;
    }

    int i = GetAndRemoveLastElement(sta);
    GetAndRemoveLastElement_Version2(sta);
    sta.push(i);
    return;
}
