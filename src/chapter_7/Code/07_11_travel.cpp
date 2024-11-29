//
// Created by Vojago on 2024/11/29.
//
// travel.cpp--传递和返回整个结构
#include <iostream>

struct travel_time
{
    int hours;
    int minutes;
};

constexpr int MINUTES_PER_HOUR = 60; // 分钟每小时转换系数
travel_time sum(travel_time t1, travel_time t2);
void show_time(travel_time t);

int code_11_travel()
{
    using namespace std;
    travel_time day1 = {5, 45};
    travel_time day2 = {4, 55};

    travel_time trip = sum(day1, day2);
    cout << "Two-day total: ";
    show_time(trip);

    travel_time day3 = {4, 32};
    cout << "Three day total: ";
    show_time(sum(trip, day3));
    return 0;
}

travel_time sum(travel_time t1, travel_time t2) // 将travel_time的hours和minutes分别相加
{
    travel_time total;
    total.minutes = (t1.minutes + t2.minutes) % MINUTES_PER_HOUR;
    total.hours = t1.hours + t2.hours + (t1.minutes + t2.minutes) / MINUTES_PER_HOUR;
    return total;
}

void show_time(travel_time t) // 显示travel_time
{
    using namespace std;
    cout << t.hours << " hours, ";
    cout << t.minutes << " minutes\n";
}
