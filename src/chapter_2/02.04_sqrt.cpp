#include <cmath>
#include "head.h"

int sqrt()
{
    double area;
    cout << "输入住宅的建筑面积(以平方英尺为单位)：";
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "这相当于一个边长为 " << side << " 的正方形。" << endl;
    cout << "真有意思!" << endl;
    return 0;
}