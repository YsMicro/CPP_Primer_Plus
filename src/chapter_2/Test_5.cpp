//摄氏度转换华氏度
#include "head.h"

void temperature()
{
    double t;
    cout << "输入摄氏度：";
    cin >> t;
    cout << endl;
    cout << "对应的华氏度为：" << 1.8 * t + 32.0 << endl;
}