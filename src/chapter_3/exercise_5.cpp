#include <iostream>

int chapter_3_population()
{
    using namespace std;
    long long global_population;
    long long usa_population;
    std::cout << "输入全球人口数量: ";
    std::cin >> global_population;
    std::cout << "输入美国人口数量: ";
    std::cin >> usa_population;
    cout << "美国人口占全球人口的百分比为: " << static_cast<double>(usa_population) / global_population * 100 << "%" << endl;
    return 0;
}
