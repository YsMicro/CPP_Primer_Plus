//#include "chapter_4_head.h"

#include <iostream>
using namespace std;
int instr1()
{
    const int ARSIZE = 20;
    char name[ARSIZE];
    char dessert[ARSIZE];

    cout << "������֣�\n";
    cin >> name;
    cout << "����ϲ������㣺\n";
    cin >> dessert;
    cout << "������ζ�� " << dessert;
    cout << " ���㣬" << name << "��\n";
    return 0;
}