// Create by Shujia Huang on 2021-07-20
#include "head.h"

int sec_convert()
{
    long total_seconds;

    cout << "输入秒数：";
    cin >> total_seconds;

    int days = total_seconds / 86400;
    int hours = (total_seconds % 86400) / 3600;
    int minutes = ((total_seconds % 86400) % 3600) / 60;
    int seconds = ((total_seconds % 86400) % 3600) % 60;

    cout << total_seconds << " 秒 = "
        << days << " 天 "
        << hours << " 时 "
        << minutes << " 分 "
        << seconds << " 秒。" << endl;

    return 0;
}