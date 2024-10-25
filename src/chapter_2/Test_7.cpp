//显示时间
#include "head.h"

void time(int h, int m)
{
    cout << endl << "时间：" << h << ":" << m << endl;
}

int time_main()
{
    int h;
    int m;
    cout << "输入小时：";
    cin >> h;
    cout << endl << "输入分钟：";
    cin >> m;
    time(h,m);
    return 0;
}
