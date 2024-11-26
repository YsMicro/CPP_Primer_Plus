//ʹ��ȡ������Ѱ�ת��ΪӢʯ
//#include "chapter_3_head.h"
#include <iostream>
using namespace std;
int modulus()
{
    const int Lbs_per_stn = 14;
    int lbs;

    cout << "���������صİ�����";
    cin >> lbs;
    int stone = lbs / Lbs_per_stn;
    int pounds = lbs % Lbs_per_stn;
    cout << lbs << " ���� " << stone << " Ӣʯ " << pounds << " ����\n";
    return 0;
}
