//#include "chapter_4_head.h"
#include <string>
#include <cstring>

int strtype4()
{
    char charr[20];
    string str;

    cout << "����ǰ charr �ַ����ĳ��ȣ�"
        << strlen(charr) << endl;
    cout << "����ǰ str �ַ����ĳ��ȣ�"
        << str.size() << endl;
    cout << "����һ���ı���\n";
    cin.getline(charr, 20);//ָ����󳤶�
    cout << "�������ˣ�" << charr << endl;
    cout << "������һ���ı���\n";
    getline(cin, str);//cin �����ǲ�����û�г���ָʾ��
    cout << "�������ˣ�" << str << endl;
    cout << "����� charr �ַ����ĳ��ȣ�"
        << strlen(charr) << endl;
    cout << "����� str �ַ����ĳ��ȣ�"
        << str.size() << endl;

    return 0;
}