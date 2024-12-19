//
// Created by Vojago on 2024/12/12.
//
#include <iostream>
double harmonic_mean(double x, double y);

int practice_1()
{
    double x, y;
    using namespace std;
    cout << "Enter two numbers(0 to quit): ";
    cin >> x >> y;
    while (x && y)
    {
        cout << "The number is " << harmonic_mean(x, y) << endl;
        cout << "Enter two numbers(0 to quit): ";
        cin >> x >> y;
    }
    cout << "Done!" << endl;
    return 0;
}
// 计算调和平均数
double harmonic_mean(double x, double y)
{
    return 2.0 * x * y / (x + y);
}
