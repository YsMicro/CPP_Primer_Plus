//
// Created by Vojago on 2024/12/19.
//
/*
 *2．编写一个程序，要求用户输入最多10个高尔夫成绩，并将其存
 *储在一个数组中。程序允许用户提早结束输入，并在一行上显示所有成
 *绩，然后报告平均成绩。请使用3个数组处理函数来分别进行输入、显
 *示和计算平均成绩。
 */
#include <iostream>
using namespace std;
void fill_array(double a[], int size);
void print_array(double a[], int size);
double array_avg(double a[], int size);

int practice_2()
{
    constexpr int SIZE = 10;
    double a[SIZE] = {0};
    fill_array(a, SIZE);
    print_array(a, SIZE);
    cout << "The average is: " << array_avg(a, SIZE) << endl;
    return 0;
}

void fill_array(double a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the number # " << i + 1 << " : ";
        if (!(cin >> a[i]))
            break;
    }
}

void print_array(double a[], int size)
{
    cout << "Array elements are:" << endl;
    cout << a[0];
    for (int i = 1; i < size; i++)
    {
        cout << ", " << a[i];
    }
    cout << endl;
}

double array_avg(double a[], int size)
{
    double avg = 0;
    for (int i = 0; i < size; i++)
        avg += a[i];
    avg = avg / size;
    return avg;
}
