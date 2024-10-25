//getinfo.cpp 输入与输出

#include <iostream>
#include "head.h"

int getinfo()
{
    int carrots;
    cout << "你有多少carrots?" << endl;
    cin >> carrots;
    cout << "再来两个.";
    carrots = carrots + 2;
    //下一行连锁输出
    cout << "现在有 " << carrots << " carrots." << endl;
    return 0;
}