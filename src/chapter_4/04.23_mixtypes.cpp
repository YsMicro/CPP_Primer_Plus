//#include "chapter_4_head.h"

struct antarctica_years_end
{
    int year;
    //�Լ�����һЩ����
};

#include <iostream>
using namespace std;
int mixtypes()
{
    antarctica_years_end s01, s02, s03;
    s01.year = 1998;
    antarctica_years_end* pa = &s02;
    pa->year = 1999;
    antarctica_years_end trio[3];
    trio[0].year = 2003;
    cout << trio->year << endl;
    const antarctica_years_end* arp[3] = { &s01, &s02, &s03 };
    cout << arp[1]->year << endl;
    const antarctica_years_end** ppa = arp;
    auto ppb = arp;
    cout << (*ppa)->year << endl;
    cout << (*(ppb + 1))->year << endl;
    return 0;
}