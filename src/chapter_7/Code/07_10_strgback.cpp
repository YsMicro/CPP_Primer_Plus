//
// Created by Vojago on 2024/11/29.
//
#include <iostream>
char* build_str(char c, int n); // 原型
int code_10_strgback()
{
    using namespace std;
    int times;
    char ch;
    cout << "Enter a character: " << endl;
    cin >> ch;
    cout << "Enter a integer: " << endl;
    cin >> times;
    char* ps = build_str(ch, times);
    cout << ps << endl;
    delete [] ps;
    ps = build_str('+', 20);
    cout << ps << "-DONE-" << ps << endl;
    delete [] ps;
    return 0;
}

char* build_str(char c, int n)
{
    char* pstr = new char[n + 1];
    pstr[n] = '\0';
    while (n-- > 0)
        pstr[n] = c;
    return pstr;
}
