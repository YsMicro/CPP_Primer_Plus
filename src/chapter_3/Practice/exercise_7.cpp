//#include "chapter_3_head.h"
#include <iostream>
using namespace std;
int oil_convert()
{
    using namespace std;

    const double Km2Mile = 0.6214;
    const double Gallon2Litre = 3.875;

    double fuel_consumption_en = 0.0;
    cout << "Enter the fuel consumption in European standard: ";
    cin >> fuel_consumption_en;

    double fuel_consumption_us = (100 * Km2Mile) / (fuel_consumption_en/Gallon2Litre);
    cout << "The fuel consumption in US standard is " << fuel_consumption_us
         << " Miles/Gallon (mpg)." << endl;  

    return 0;
}