//
// Created by Vojago on 2024/12/11.
//
// arfupt.cpp -- 存放函数指针的数组
#include <iostream>
const double* f1(const double ar[], int n);
const double* f2(const double [], int);
const double* f3(const double*, int);

int code_19_arfupt()
{
    using namespace std;
    double av[3] = {1112.3, 1542.6, 2227.9};

    // 指向函数的指针
    const double*(*p1)(const double*, int) = f1;
    auto p2 = f2;
    cout << "Using pointers to functions:\n";
    cout << " Address   Value\n";
    cout << (*p1)(av, 3) << ": " << *(*p1)(av, 3) << endl;
    cout << p2(av, 3) << ": " << *p2(av, 3) << endl;

    // pa 存放指针的数组
    // auto 在列表初始化时不工作
    const double*(*pa[3])(const double*, int) = {f1, f2, f3};
    // 但在初始化单个值是工作
    // pb 是指向 pa 的第一个元素的指针
    auto pb = pa;
    cout << "\nUsing an array of pointers to functions:\n";
    cout << " Address   Value\n";
    for (int i = 0; i < 3; i++)
        cout << pa[i](av, 3) << ": " << *pa[i](av, 3) << endl;
    cout << "\nUsing a pointer to a pointer to a function:\n";
    cout << " Address   Value\n";
    for (int i = 0; i < 3; i++)
        cout << pb[i](av, 3) << ": " << *pb[i](av, 3) << endl;
    // 指向函数指针数组的指针
    cout << "\nUsing pointer to an array of pointers:\n";
    cout << " Address   Value\n";
    // 简单的方式声明 pc
    auto pc = &pa;
    cout << (*pc)[0](av, 3) << ": " << *(*pc)[0](av, 3) << endl;
    // 麻烦的方式声明 pd
    const double*(*(*pd)[3])(const double*, int) = &pa;
    // 在 pdb 中存储返回值
    const double* pdb = (*pd)[1](av, 3);
    cout << pdb << ": " << *pdb << endl;
    // 替代符号
    cout << (*(*pd)[2])(av, 3) << ": " << *(*(*pd)[2])(av, 3) << endl;
    // cin.get();
    return 0;
}

// 一些相当枯燥的函数
const double* f1(const double ar[], int n)
{
    return ar;
}

const double* f2(const double ar[], int n)
{
    return ar + 1;
}

const double* f3(const double ar[], int n)
{
    return ar + 2;
}
