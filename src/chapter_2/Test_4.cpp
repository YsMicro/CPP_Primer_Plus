#include <iostream>
#include "chapter_2_head.h"

int year_month() 
{
    int years, months;
    cout << "Enter your age: ";
    cin >> years;

    months = years * 12;
    cout << years << " years is " << months << " monthes." << endl;
    return 0;
}
