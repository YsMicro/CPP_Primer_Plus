//carrots.cpp ʳ����̳���
//ʹ�ú���ʾֵ

#include <iostream>
#include "head.h"


int carrots()
{
    int carrots;

    carrots = 25;
    cout << "I have ";
    cout << carrots;
    cout << " carrots.";
    cout << endl;
    carrots = carrots - 1;
    cout << "Crunch,crunch.Now I have " << carrots << " carrots." << endl;
    return 0;
}