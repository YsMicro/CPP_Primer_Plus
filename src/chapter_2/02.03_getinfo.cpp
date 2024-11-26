//getinfo.cpp ���������

#include <iostream>
//#include "chapter_2_head.h"

int getinfo()
{
    using namespace std;
    int carrots;
    cout << "���ж���carrots?" << endl;
    cin >> carrots;
    cout << "��������.";
    carrots = carrots + 2;
    //��һ���������
    cout << "������ " << carrots << " carrots." << endl;
    return 0;
}