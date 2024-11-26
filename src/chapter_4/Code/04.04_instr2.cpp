//#include "chapter_4_head.h"

#include <iostream>
using namespace std;
int instr2()
{
    const int ARSIZE = 20;
    char name[ARSIZE];
    char dessert[ARSIZE];

    cout << "����������\n";
    cin.getline(name, ARSIZE);
    cout << "��������ϲ������Ʒ��";
    cin.getline(dessert, ARSIZE);
    cout << "������ζ�� " << dessert;
    cout << " ���㣬" << name << " ��\n";
    return 0;
}