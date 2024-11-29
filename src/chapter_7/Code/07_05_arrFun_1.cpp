//
// Created by Vojago on 2024/5/14.
//
#include <iostream>

const int ARR_SIZE = 8;

int code_05_sumArr(int array[], int array_size);

[[maybe_unused]] int code_05_arrFun_1()
{
    using namespace std;
    int cookies[ARR_SIZE] = {1, 2, 4, 8, 16, 32, 64, 128};
    int sum = code_05_sumArr(cookies, ARR_SIZE);
    cout << "总共吃了" << sum << "个甜饼\n";
    return 0;
}

int code_05_sumArr(int array[], int array_size)
{
    int total = 0;
    for (int i = 0; i < array_size; ++i)
    {
        total = total + array[i];
    }
    return total;
}
