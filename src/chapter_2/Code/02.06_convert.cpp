#include <iostream>
//#include "chapter_2_head.h"

int stonetolb(int);

int convert_main()
{
    using namespace std;
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
