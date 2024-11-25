#include "chapter_3_head.h"

int oil_convert()
{
    const double Km2Mile = 0.6214;
    const double Gallon2Litre = 3.875;

    double fuel_comsuption_en = 0.0;
    cout << "�����������ŷ�ޣ���";
    cin >> fuel_comsuption_en;

    double fuel_comsuption_us = (100 * Km2Mile) / (fuel_comsuption_en / Gallon2Litre);
    cout << "��������������Ϊ" << fuel_comsuption_us
        << " Miles/Gallon (mpg)." << endl;

    return 0;
}