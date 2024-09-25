//
// Created by Vojago on 2024/9/25.
//

#include "myTime2.h"
#include <iostream>

Time2::Time2() {
    hours = minutes = 0;
}

Time2::Time2(int h, int m) {
    hours = h;
    minutes = m;
}

void Time2::AddMin(int m) {
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}

void Time2::AddHr(int h) {
    hours += h;
}

void Time2::Reset(int h, int m) {
    hours = h;
    minutes = m;
}

Time2 Time2::operator+(const Time2 &t) const {
    Time2 sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

Time2 Time2::operator-(const Time2 &t) const {
    Time2 diff;
    int tot1, tot2;
    tot1 = t.minutes + 60 * t.hours;
    tot2 = minutes + 60 * hours;
    diff.minutes = (tot2 - tot1) % 60;
    diff.hours = (tot2 - tot1) / 60;
    return diff;
}

Time2 Time2::operator*(double mult) const {
    Time2 result;
    long total_minutes = hours * mult * 60 + minutes * mult;
    result.hours = total_minutes / 60;
    result.minutes = total_minutes % 60;
    return result;
}

void Time2::Show() const {
    std::cout << hours << " hours, " << minutes << " minutes";
}
