//
// Created by Vojago on 2024/11/29.
//
// structfun.cpp--带结构参数的函数
#include <iostream>
#include <cmath>

struct polar // 极座标系
{
    double distance; // 距离
    double angle; // 角度
};

struct rectangle // 直角坐标系
{
    double x; // 横轴
    double y; // 纵轴
};

polar rect2polar(rectangle xypos);
void show_polar(polar dapos);

int code_12_structfun()
{
    using namespace std;
    rectangle rplace;
    polar pplace;

    cout << "Enter the x and y values:";
    while (cin >> rplace.x >> rplace.y)
    {
        pplace = rect2polar(rplace);
        show_polar(pplace);
        cout << "Next two numbers (q to quit): ";
    }
    cout << "Done.\n" << endl;
    return 0;
}

polar rect2polar(rectangle xypos)
{
    using namespace std;
    polar answer;
    answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
    answer.angle = atan2(xypos.y, xypos.x);
    return answer;
}

void show_polar(polar dapos)
{
    using namespace std;
    const double Red_to_deg = 57.29577951;

    cout << "distance = " << dapos.distance;
    cout << ", angle = " << dapos.angle * Red_to_deg;
    cout << " degrees\n";
}
