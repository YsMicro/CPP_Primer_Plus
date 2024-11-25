#include <iostream>
#include "chapter_2_head.h"

void cout_1();
void cout_2();

int out_main()
{
    cout_1();
    cout_1();
    cout_2();
    cout_2();
    return 0;
}

void cout_1()
{
    cout << "Three blind mice\n";
}

void cout_2()
{
    cout << "See how they run\n";
}