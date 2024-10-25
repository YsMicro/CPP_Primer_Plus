//身高转化
#include "head.h"

int height()
{
    int cm;
    const int Cm_per_m = 100;
    int m;

    cout << "输入身高(厘米)：___\b\b\b";
    cin >> cm;
    m = cm / Cm_per_m;
    cm = cm % Cm_per_m;
    cout << endl << "你的身高为：" << m << " 米 " << cm << " 厘米";
    return 0;
}