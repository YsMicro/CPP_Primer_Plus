#include "head.h"

int population()
{
    long long all_popu = 0;
    long long us_popu = 0;

    cout << "输入全球人口：";
    cin >> all_popu;
    cout << "输入美国人口：";
    cin >> us_popu;
    cout << "美国人口占全球人口的 " << long double(us_popu) / long double(all_popu) * 100 << "% 。";
    return 0;
}