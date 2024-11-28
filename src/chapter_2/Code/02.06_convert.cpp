#include <iostream>
//#include "chapter_2_head.h"

int stone2lb(int);

int code_0206_convert()
{
    using namespace std;
    int stone;
    cout << "Enter the weight in stone: ";
    cin >> stone;
    int pounds = stone2lb(stone);
    cout << stone << " stone = ";
    cout << pounds << " pounds." << endl;
    return 0;
}

int stone2lb(int sts)
{
    return sts * 14;
}
