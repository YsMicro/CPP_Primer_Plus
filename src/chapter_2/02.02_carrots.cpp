//carrots.cpp 食物进程程序
//使用和显示值

#include <iostream>
#include "head.h"


int carrots()
{
    int carrots;

    carrots = 25;
    cout << "I have ";
    cout << carrots;
    cout << " carrots.";
    cout << endl;
    carrots = carrots - 1;
    cout << "Crunch,crunch.Now I have " << carrots << " carrots." << endl;
    return 0;
}