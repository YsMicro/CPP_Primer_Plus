//getinfo.cpp ���������

#include <iostream>
#include "head.h"

int getinfo()
{
    int carrots;
    cout << "���ж���carrots?" << endl;
    cin >> carrots;
    cout << "��������.";
    carrots = carrots + 2;
    //��һ���������
    cout << "������ " << carrots << " carrots." << endl;
    return 0;
}