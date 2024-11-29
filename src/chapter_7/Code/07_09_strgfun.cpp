//
// Created by Vojago on 2024/11/29.
//
#include <iostream>
unsigned int c_in_str(const char* str, char ch); // 计数字符在字符串中的数量

[[maybe_unused]] int code_09_strgfun()
{
    using namespace std;
    char mmm[15] = "minimum"; // 字符串存放在char数组中
    const char* wail = "ululate"; // 指向字符串的指针
    unsigned int ms = c_in_str(mmm, 'm'); // 字符串"mmm"中'm'的数量
    unsigned int us = c_in_str(wail, 'u'); // 字符串"wail"中'u'的数量
    cout << ms << " m characters in " << mmm << endl;
    cout << us << " u characters in " << wail << endl;
    return 0;
}

unsigned int c_in_str(const char* str, const char ch)
{
    unsigned int count = 0;
    while (*str)
    {
        if (*str == ch)
            count++;
        str++;
    }
    return count;
}
