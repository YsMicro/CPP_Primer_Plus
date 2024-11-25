#include <iostream>
#include "chapter_2_head.h"

int long_convert()
{
    cout << "����long��\n";
    int longs;
    cin >> longs;
    int ma = 220*longs;
    cout << longs << " long ���� " << ma << " �롣";
    return 0;
}