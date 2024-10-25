//强制类型转换
#include "head.h"

int typecast()
{
    int auks, bats, coots;
    auks = 19.99 + 11.99;//计算double值转换为int
    bats = (int)19.99 + (int)11.99;//作为int值计算
    coots = int(19.99) + int(11.99);//同上
    cout << "auks = " << auks << " , bats = " << bats;
    cout << " , coots = " << coots << endl;

    char ch = 'Z';
    cout << ch << " 的ASCII码是 ";
    cout << int(ch) << endl;
    cout << "重复，确实是 ";
    cout << static_cast<int> (ch) << endl;
    return 0;
}
