//
// Created by Vojago on 2024/9/23.
//
#include <iostream>
#include "myTime0.h"

int my_time0() {
    using namespace std;
    Time0 planning;
    Time0 coding(2, 40);
    Time0 fixing(5, 55);
    Time0 total;

    cout << "planning time = ";
    planning.Show();
    cout << endl;

    cout << "coding time = ";
    coding.Show();
    cout << endl;

    cout << "fixing time = ";
    fixing.Show();
    cout << endl;

    total = coding.Sum(fixing);
    cout << "coding.Sum(fixing) = ";
    total.Show();
    cout << endl;

    return 0;
}