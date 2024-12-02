//
// Created by Vojago on 2024/12/2.
//
// recur.cpp -- 使用递归
#include <iostream>
void countdown(int n);

int code_16_recur()
{
    std::cout << "using recursive function:" << std::endl;
    countdown(4);
    return 0;
}

void countdown(int n)
{
    using namespace std;
    cout << "Counting down ... " << n << endl;
    if (n > 0)
        countdown(n - 1);
    cout << n << ": Kaboom!\n";
}
