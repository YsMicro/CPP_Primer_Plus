//#include "chapter_4_head.h"

struct inflatable
{
    char name[20];
    float volume;
    double price;
};

#include <iostream>
using namespace std;
int struct_main()
{
    inflatable* ps = new inflatable;
    cout << "���� inflatable ��Ŀ�����֣�";
    cin.get(ps->name, 20);
    cout << "�������������Ӣ�ߣ���";
    cin >> (*ps).volume;
    cout << "����۸�$";
    cin >> ps->price;
    cout << "Name: " << (*ps).name << endl;
    cout << "Volume: " << ps->volume << " ����Ӣ��\n";
    cout << "Price: $" << ps->price << endl;
    delete ps;
    return 0;
}
