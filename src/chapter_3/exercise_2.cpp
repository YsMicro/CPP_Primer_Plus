//#include "chapter_3_head.h"
#include <iostream>
using namespace std;
double bmi_app(double weight, double height)
{
    double bmi = weight / (height * height);
    return bmi;
}
int bmi_main()
{
    const double Inch_per_foot = 12;
    const double Meter_per_inch = 0.0254;
    const double Pounds_per_kg = 2.2;

    double foot = 0;
    double inch = 0;
    double pounds = 0;

    cout << "��������(Ӣ��)��";
    cin >> foot;
    cout << endl << "��������(Ӣ��)��";
    cin >> inch;
    cout << endl << "��������(��)��";
    cin >> pounds;

    double height = (foot * Inch_per_foot + inch) * Meter_per_inch;
    double weight = pounds / Pounds_per_kg;

    cout << endl << "���BMIָ��Ϊ��" << bmi_app(weight, height) << endl;
    return 0;
}