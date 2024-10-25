//光年转换天文单位
#include "head.h"

double light_years(double n)
{
    return 63240 * n;
}

int L_Y_main()
{
    double n;
    cout << "输入光年：";
    cin >> n;   
    cout << endl;
    cout << n << " 光年 = " << light_years(n) << " 天文单位" << endl;
    return 0;
}