#include "head.h"

int population()
{
    long long all_popu = 0;
    long long us_popu = 0;

    cout << "����ȫ���˿ڣ�";
    cin >> all_popu;
    cout << "���������˿ڣ�";
    cin >> us_popu;
    cout << "�����˿�ռȫ���˿ڵ� " << long double(us_popu) / long double(all_popu) * 100 << "% ��";
    return 0;
}