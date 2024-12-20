//
// Created by Vojago on 2024/5/15.
//
#include <iostream>

const int ARR_SIZE = 8;
using namespace std;
int code_06_sumArr(int arr[], int n);

[[maybe_unused]] int code_06_arrFun_2()
{
    int cookies[ARR_SIZE] = {1, 2, 4, 8, 16, 32, 64, 128};
    cout << cookies << " = 数组地址，";
    cout << sizeof cookies << " = 数组大小\n";
    int sum = code_06_sumArr(cookies, ARR_SIZE);
    cout << "总共有 " << sum << " 块甜饼被吃" << endl;
    sum = code_06_sumArr(cookies, 3);
    cout << "前三位食客吃了 " << sum << " 块甜饼。\n";
    sum = code_06_sumArr(cookies + 4, 4);
    cout << "后四位食客吃了 " << sum << " 块甜饼。\n";
    return 0;
}

int code_06_sumArr(int arr[], int n)
{
    int total = 0;
    cout << arr << " = 数组，";
    cout << sizeof(arr) << " = 数组大小\n";
    for (int i = 0; i < n; ++i)
        total = total + arr[i];
    return total;
}
