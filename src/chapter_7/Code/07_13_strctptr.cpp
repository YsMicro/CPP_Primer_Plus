//
// Created by Vojago on 2024/12/2.
//
// strctptr.cpp 用指针传递结构
#include <iostream>
#include <cmath>

struct polar
{
    double distance;
    double angle;
};

struct rect
{
    double x;
    double y;
};

void rect2polar(const rect* pxy, polar* pda);
void show_polar(const polar* pda);

int code_13_strctptr()
{
    using namespace std;
    rect rplace;
    polar pplace;
    cout << "Enter the x and y values: ";
    while (cin >> rplace.x >> rplace.y)
    {
        rect2polar(&rplace, &pplace);
        show_polar(&pplace);
        cout << "Next two numbers(q to quit): ";
    }
    cout << "Done" << endl;
    return 0;
}

// 展示极座标系，将弧度转换为角度
void show_polar(const polar* pda)
{
    using namespace std;
    const double Rad_to_deg = 57.29577951;
    cout << "distance = " << pda->distance;
    cout << ", angle = " << pda->angle * Rad_to_deg;
    cout << "degrees" << endl;
}

// 转换直角坐标系到极座标系
void rect2polar(const rect* pxy, polar* pda)
{
    using namespace std;
    pda->distance = sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
    pda->angle = atan2(pxy->y, pxy->x);
}
