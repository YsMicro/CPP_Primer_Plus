//#include "chapter_4_head.h"

#include <iostream>
using namespace std;
int addpntrs()
{
    double wages[3] = { 10000.0, 20000.0, 30000.0 };
    short stacks[3] = { 3, 2, 1 };

    double* pw = wages;
    short* ps = stacks;
    cout << "pw = " << pw << " , *pw = " << *pw << endl;
    pw = pw + 1;
    cout << "add 1 to the pw pointer:\n";
    cout << "pw = " << pw << " , *pw = " << *pw << "\n\n";

    cout << "ps = " << ps << " , *ps = " << *ps << endl;
    ps = ps + 1;
    cout << "add 1 to the ps pointer:\n";
    cout << "ps = " << ps << " , *ps = " << *ps << "\n\n";

    cout << "access two elements with array notation\n";
    cout << "stack[0] = " << stacks[0]
        << " , stack[1] = " << stacks[1] << endl;
    cout << "access two elements with pointer notation\n";
    cout << "*stacks = " << *stacks
        << " , *(stacks + 1) = " << *(stacks + 1) << endl;
    
    cout << sizeof(wages) << " = size of wages array\n";
    cout << sizeof(pw) << " = size of pw array\n";
    return 0;
}