#include <cmath>
#include "chapter_2_head.h"

int sqrt()
{
    double area;
    cout << "����סլ�Ľ������(��ƽ��Ӣ��Ϊ��λ)��";
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "���൱��һ���߳�Ϊ " << side << " �������Ρ�" << endl;
    cout << "������˼!" << endl;
    return 0;
}