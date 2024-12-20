//
// Created by Vojago on 2024/12/12.
//
/*
* 1．编写一个程序，不断要求用户输入两个数，直到其中的一个为
* 0。对于每两个数，程序将使用一个函数来计算它们的调和平均数，并
* 将结果返回给main( )，而后者将报告结果。调和平均数指的是倒数平均
* 值的倒数，计算公式如下：
* 调和平均数=2.0 * x * y / (x + y)
*/
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
