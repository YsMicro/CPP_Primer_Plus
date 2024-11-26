//�������͵�����
//#include "chapter_3_head.h"
#include <climits>
#include <iostream>
using namespace std;
int limits()
{
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    cout << "int ���� " << sizeof(int) << " �ֽ�" << endl;
    cout << "short ���� " << sizeof n_short << " �ֽ�" << endl;
    cout << "long ���� " << sizeof n_long << " �ֽ�" << endl;
    cout << "long long ���� " << sizeof n_llong << " �ֽ�" << endl;
    cout << endl;

    cout << "���ֵ��" << endl;
    cout << "int��" << n_int <<endl;
    cout << "short��" << n_short << endl;
    cout << "long��" << n_long << endl;
    cout << "long long��" << n_llong << endl << endl;

    cout << "��С int ֵ = " << INT_MIN << endl;
    cout << "ÿ�ֽ��� " << CHAR_BIT << " λ" << endl;
    return 0;
}