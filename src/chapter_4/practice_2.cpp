#include "chapter_4_head.h"
#include <string>

int practice_2()
{
    const int ARSIZE = 20;
    string name;
    string dessert;

    cout << "����������\n";
    getline(cin, name);
    cout << "��������ϲ������Ʒ��";
    getline(cin, dessert);
    cout << "������ζ�� " << dessert;
    cout << " ���㣬" << name << " ��\n";
    return 0;
}