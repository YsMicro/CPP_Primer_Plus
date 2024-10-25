#include "head.h"

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

    cout << "输入身高(英尺)：";
    cin >> foot;
    cout << endl << "输入身高(英寸)：";
    cin >> inch;
    cout << endl << "输入体重(磅)：";
    cin >> pounds;

    double height = (foot * Inch_per_foot + inch) * Meter_per_inch;
    double weight = pounds / Pounds_per_kg;

    cout << endl << "你的BMI指数为：" << bmi_app(weight, height) << endl;
    return 0;
}