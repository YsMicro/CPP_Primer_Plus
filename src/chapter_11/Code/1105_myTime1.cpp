//
// Created by Vojago on 2024/9/23.
//

#include "1104_myTime1.h"
#include <iostream>

Time1::Time1() {
    hours = minutes = 0;
}

Time1::Time1(int h, int m) {
    hours = h;
    minutes = m;
}

void Time1::AddMin(int m) {
    minutes += m;
    hours += m / 60;
    minutes %= 60;
}

void Time1::AddHr(int h) {
    hours += h;
}

void Time1::Reset(int h, int m) {
    hours = h;
    minutes = m;
}

Time1 Time1::operator+(const Time1 &t) const {
    Time1 sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

void Time1::Show() const {
    std::cout << hours << " 小时， " << minutes << " 分钟";
}