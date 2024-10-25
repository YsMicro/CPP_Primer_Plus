#include "head.h"

int oil_convert()
{
    const double Km2Mile = 0.6214;
    const double Gallon2Litre = 3.875;

    double fuel_comsuption_en = 0.0;
    cout << "输入耗油量（欧洲）：";
    cin >> fuel_comsuption_en;

    double fuel_comsuption_us = (100 * Km2Mile) / (fuel_comsuption_en / Gallon2Litre);
    cout << "耗油量（美国）为" << fuel_comsuption_us
        << " Miles/Gallon (mpg)." << endl;

    return 0;
}