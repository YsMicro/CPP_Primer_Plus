//char����int�ͶԱ�
#include "chapter_3_head.h"

int morechar()
{
    char ch = 'M';
    int i = ch;
    cout << ch << " ��ASCII���� " << i << " ��" << endl;

    cout << "�ַ����һ��" << endl;
    ch = ch + 1;
    i = ch;
    cout << ch << " ��ASCII���� " << i << " ��" << endl;

    //ʹ�� cout.put() ��Ա������ʾ�ַ�
    cout << "ʹ�� cout.put() ������ʾ ch ��";
    cout.put(ch);

    //ʹ�� cout.put() ��ʾ�ַ�����
    cout.put('!');
    
    cout << endl << "���" << endl;
    return 0;
}