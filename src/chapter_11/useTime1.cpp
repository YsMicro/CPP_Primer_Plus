//
// Created by Vojago on 2024/9/23.
//
#include <iostream>
#include "myTime1.h"

[[maybe_unused]] int my_time1() {
    using std::cout;
    using std::endl;
    Time1 planning;
    Time1 coding(2, 40);
    Time1 fixing(5, 55);
    Time1 total;

    cout << "planning time = ";
    planning.Show();
    cout << endl;

    cout << "coding time = ";
    coding.Show();
    cout << endl;

    cout << "fixing time = ";
    fixing.Show();
    cout << endl;

    total = coding + fixing;
    cout << "coding + fixing = ";
    total.Show();
    cout << endl;

    Time1 moreFixing(3, 28);
    cout << "more fixing time = ";
    moreFixing.Show();
    cout << endl;
    total = moreFixing.operator+(total);
    cout << "moreFixing.operator+(total) = ";
    total.Show();
    cout << endl;

    return 0;
}