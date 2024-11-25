//ǿ������ת��
#include "chapter_3_head.h"

int typecast()
{
    int auks, bats, coots;
    auks = 19.99 + 11.99;//����doubleֵת��Ϊint
    bats = (int)19.99 + (int)11.99;//��Ϊintֵ����
    coots = int(19.99) + int(11.99);//ͬ��
    cout << "auks = " << auks << " , bats = " << bats;
    cout << " , coots = " << coots << endl;

    char ch = 'Z';
    cout << ch << " ��ASCII���� ";
    cout << int(ch) << endl;
    cout << "�ظ���ȷʵ�� ";
    cout << static_cast<int> (ch) << endl;
    return 0;
}
