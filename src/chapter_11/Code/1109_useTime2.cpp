//
// Created by Vojago on 2024/9/25.
//
#include <iostream>
#include "1107_myTime2.h"

[[maybe_unused]] int my_time2() {
    using std::cout;
    using std::endl;
    Time2 weeding(4, 35);
    Time2 waxing(2, 47);
    Time2 total;
    Time2 diff;
    Time2 adjusted;

    cout << "weeding Time = ";
    weeding.Show();
    cout << endl;

    cout << "waxing Time = ";
    waxing.Show();
    cout << endl;

    cout << "total work time = ";
    total = weeding + waxing;   // use operator+()
    total.Show();
    cout << endl;

    diff = weeding - waxing;    // use operator-()
    cout << "weeding time - waxing time = ";
    diff.Show();
    cout << endl;

    adjusted = total * 1.5;      // use operator+()
    cout << "adjusted work time = ";
    adjusted.Show();
    cout << endl;
    // std::cin.get();
    return 0;
}
