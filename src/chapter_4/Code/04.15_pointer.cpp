//#include "chapter_4_head.h"

#include <iostream>
using namespace std;
int pointer()
{
    int updates = 6;
    int* p_updates;
    p_updates = &updates;

    cout << "Values: updates = " << updates;
    cout << " , *p_updates = " << *p_updates << endl;

    cout << "Address: &updates = " << &updates;
    cout << " , p_updates = " << p_updates << endl;

    *p_updates = *p_updates + 1;
    cout << "Now updates = " << updates << endl;
    return 0;
}