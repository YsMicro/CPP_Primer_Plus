//
// Created by Vojago on 2024/12/6.
//
//fun_ptr.cpp -- 指向函数的指针
#include <iostream>
double betsy(int); // betsy的估算开发时间的函数
double pam(int); // pam的估算开发时间的函数

// 第二个参数是一个指向返回double类型，使用int类型作为参数的函数的指针
void estimate(int lines, double (*pf)(int));

int code_18_fun_ptr()
{
    using namespace std;
    int code;
    cout << "How many lines of code do you need?" << endl;
    cin >> code;
    std::cout << "Here's Betsy's estimate: " << endl;
    estimate(code, betsy);
    cout << "Here's Pam's estimate: " << endl;
    estimate(code, pam);
    return 0;
}

double betsy(int lns)
{
    return 0.05 * lns;
}

double pam(int lns)
{
    return 0.03 * lns + 0.0004 * lns * lns;
}

void estimate(int lines, double (*pf)(int))
{
    using namespace std;
    cout << lines << " lines will take ";
    cout << (*pf)(lines) << " hour(s)\n" << endl;
}
