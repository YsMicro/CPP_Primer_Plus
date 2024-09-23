//
// Created by Vojago on 2024/9/23.
//
#include <iostream>
#include "myTime0.h"

Time0::Time0() {
    hours = minutes = 0;
}

Time0::Time0(int h, int m) {
    hours = h;
    minutes = m;
}

void Time0::AddMin(int m) {
    minutes += m;
    hours += m / 60;
    minutes %= 60;
}

void Time0::AddHr(int h) {
    hours += h;
}

void Time0::Reset(int h, int m) {
    hours = h;
    minutes = m;
}

Time0 Time0::Sum(const Time0 &t) const {
    Time0 sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

void Time0::Show() const {
    std::cout << hours << " 小时， " << minutes << " 分钟";
}