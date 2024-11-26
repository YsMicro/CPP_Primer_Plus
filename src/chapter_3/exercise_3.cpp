//#include "chapter_3_head.h"
#include <iostream>
using namespace std;
int latitude()
{
    const int convert = 60;
    double degrees = 0;
    double minutes = 0;
    double seconds = 0;
    double sum = 0;

    cout << "����γ�ȣ�\n���ȣ��ȣ�";
    cin >> degrees;
    cout << "Ȼ�󣬷֣�";
    cin >> minutes;
    cout << "����룺";
    cin >> seconds;
    sum = degrees + minutes / convert + seconds / convert / convert;
    cout << degrees << " �� " << minutes << " �� " << seconds << " �� = " << sum << " �ȡ�" << endl;
    return 0;
}