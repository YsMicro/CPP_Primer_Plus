//����ת��
#include "chapter_3_head.h"

int height()
{
    int cm;
    const int Cm_per_m = 100;
    int m;

    cout << "��������(����)��___\b\b\b";
    cin >> cm;
    m = cm / Cm_per_m;
    cm = cm % Cm_per_m;
    cout << endl << "�������Ϊ��" << m << " �� " << cm << " ����";
    return 0;
}