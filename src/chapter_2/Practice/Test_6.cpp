//����ת�����ĵ�λ
//#include "chapter_2_head.h"
#include <iostream>
using namespace std;
double light_years(double n)
{
    return 63240 * n;
}

int L_Y_main()
{
    double n;
    cout << "������꣺";
    cin >> n;   
    cout << endl;
    cout << n << " ���� = " << light_years(n) << " ���ĵ�λ" << endl;
    return 0;
}