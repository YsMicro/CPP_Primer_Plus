#include "chapter_4_head.h"

int instr3()
{
    const int ARSIZE = 20;
    char name[ARSIZE];
    char dessert[ARSIZE];

    cout << "����������\n";
    cin.get(name, ARSIZE).get();//��ȡ�ַ��������з�
    cout << "��������ϲ������Ʒ��\n";
    cin.get(dessert, ARSIZE).get();
    cout << "������ζ�� " << dessert;
    cout << " ���㣬" << name << " ��\n";
    return 0;
}