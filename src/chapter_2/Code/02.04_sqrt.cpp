#include <cmath>
#include <iostream>

int code_0204_sqrt()
{
    using namespace std;
    double area; //地板面积
    cout << "Enter the floor area, in square feet, of your home: "; // 读取地板面积
    cin >> area;
    double side; // 地板边长
    side = sqrt(area); // 开平方
    cout << "That's the equivalent of a square " << side
        << " feet to the side." << endl;
    cout << "How fascinating!" << endl;
    return 0;
}
