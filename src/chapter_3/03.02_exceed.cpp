//�����������
#include "chapter_3_head.h"
#define ZERO 0
#include <climits>

int exceed()
{
    short sam = SHRT_MAX;
    unsigned short sue = sam;
    
    cout << "Sam �� " << sam << " ��Ԫ��Sue �� " << sue;
    cout << " ��Ԫ�Ĵ�" << endl
    << "��ÿ������һ��Ԫ��" << endl << "���� ";
    sam = sam + 1;
    sue = sue + 1;
    cout << "Sam �� " << sam << " ��Ԫ��Sue �� " << sue;
    cout << " ��Ԫ�Ĵ�\n������ Sam ��" << endl;
    sam = ZERO;
    sue = ZERO;
    cout << "Sam �� " << sam << " ��Ԫ��Sue �� " << sue;
    cout << " ��Ԫ�Ĵ�" << endl;
    cout << "ÿ������һ��Ԫ��" << endl << "���� ";
    sam = sam - 1;
    sue = sue - 1;
    cout << "Sam �� " << sam << " ��Ԫ��Sue �� " << sue;
    cout << " ��Ԫ�Ĵ�" << endl << " ���˵� Sue ��" << endl;
    return 0;
}