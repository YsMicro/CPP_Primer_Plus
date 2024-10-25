#include "head.h"

int latitude()
{
    const int convert = 60;
    double degrees = 0;
    double minutes = 0;
    double seconds = 0;
    double sum = 0;

    cout << "输入纬度：\n首先，度：";
    cin >> degrees;
    cout << "然后，分：";
    cin >> minutes;
    cout << "最后，秒：";
    cin >> seconds;
    sum = degrees + minutes / convert + seconds / convert / convert;
    cout << degrees << " 度 " << minutes << " 分 " << seconds << " 秒 = " << sum << " 度。" << endl;
    return 0;
}