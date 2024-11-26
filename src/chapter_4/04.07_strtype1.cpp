//ʹ��C++String��
//#include "chapter_4_head.h"
#include <string>

int strtype1()
{
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";
    cout << "����һ��è�ƶ��";
    cin >> charr1;
    cout << "������һ��è�ƶ��";
    cin >> str1;//ʹ�� cin ������
    cout << "������һЩè�ƶ��";
    cout << charr1 << " " << charr2 << " "
        << str1 << " " << str2 //ʹ�� cout �����
        << endl;
    cout << charr2 << " �ĵ�������ĸ�� " << charr2[2] << endl;
    cout << str2 << " �ĵ�������ĸ�� " << str2[2] << endl;//ʹ�������ʾ��
    return 0;
}