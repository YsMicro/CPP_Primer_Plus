#include "head.h"

int oil()
{
    double kilometer, oil_liter;

    cout << "输入里程数：";
    cin >> kilometer;

    cout << "输入耗油量：";
    cin >> oil_liter;

    double kilometer_per_liter = kilometer / oil_liter;
    cout << "平均耗油量为 "
        << 100 / kilometer_per_liter << " L/100km" << endl;
    return 0;
}