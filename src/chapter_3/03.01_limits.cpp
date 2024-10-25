//搞清整型的限制
#include "head.h"
#include <climits>

int limits()
{
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    cout << "int 型有 " << sizeof(int) << " 字节" << endl;
    cout << "short 型有 " << sizeof n_short << " 字节" << endl;
    cout << "long 型有 " << sizeof n_long << " 字节" << endl;
    cout << "long long 型有 " << sizeof n_llong << " 字节" << endl;
    cout << endl;

    cout << "最大值：" << endl;
    cout << "int：" << n_int <<endl;
    cout << "short：" << n_short << endl;
    cout << "long：" << n_long << endl;
    cout << "long long：" << n_llong << endl << endl;

    cout << "最小 int 值 = " << INT_MIN << endl;
    cout << "每字节有 " << CHAR_BIT << " 位" << endl;
    return 0;
}