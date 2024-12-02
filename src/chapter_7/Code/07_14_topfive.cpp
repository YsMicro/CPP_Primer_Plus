//
// Created by Vojago on 2024/12/2.
//
// topfive.cpp -- 处理一个string对象的数组
#include <iostream>
#include <string>
using namespace std;
const int SIZE = 5;
void display(const string sa[], int n);

int code_14_topfive()
{
    string list[5];
    cout << "Enter your " << SIZE << " favorite astronomical sights:\n";
    for (int i = 0; i < SIZE; i++)
    {
        cout << " #" << i + 1 << ": ";
        getline(cin, list[i]);
    }
    cout << "Your list:\n";
    display(list, SIZE);
    return 0;
}

void display(const string sa[], int n)
{
    for (int i = 0; i < n; i++)
        cout << sa[i] << " " << endl;
}
