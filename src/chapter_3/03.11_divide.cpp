//整数和浮点除法
#include "head.h"

int divide()
{
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "整数除法：9 / 5 = " << 9 / 5 << endl;
    cout << "浮点除法：9.0 / 5.0 = ";
    cout << 9.0 / 5.0 << endl;
    cout << "混合除法：9.0 / 5 = " << 9.0 / 5 << endl;
    cout << "double 常量：1E7 / 9.0 = ";
    cout << 1.E7 / 9.0 << endl;
    cout << "float 常量：1e7f / 9.0f = ";
    cout << 1.e7f / 9.0f << endl;
    return 0;
}
