#include <iostream>
#include "head.h"

int stonetolb(int);

int convert_main()
{
    int stone;
    cout << "����Ӣʯ��";
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone << " Ӣʯ = ";
    cout << pounds << " ����" << endl;
    return 0;
}

int stonetolb(int sts)
{
    return sts * 14;
}