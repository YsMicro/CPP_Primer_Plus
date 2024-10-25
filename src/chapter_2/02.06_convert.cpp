#include <iostream>
#include "head.h"

int stonetolb(int);

int convert_main()
{
    int stone;
    cout << "ÊäÈëÓ¢Ê¯£º";
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone << " Ó¢Ê¯ = ";
    cout << pounds << " °õ¡£" << endl;
    return 0;
}

int stonetolb(int sts)
{
    return sts * 14;
}