// Create by Shujia Huang on 2021-07-20
#include "chapter_3_head.h"

int sec_convert()
{
    long total_seconds;

    cout << "����������";
    cin >> total_seconds;

    int days = total_seconds / 86400;
    int hours = (total_seconds % 86400) / 3600;
    int minutes = ((total_seconds % 86400) % 3600) / 60;
    int seconds = ((total_seconds % 86400) % 3600) % 60;

    cout << total_seconds << " �� = "
        << days << " �� "
        << hours << " ʱ "
        << minutes << " �� "
        << seconds << " �롣" << endl;

    return 0;
}