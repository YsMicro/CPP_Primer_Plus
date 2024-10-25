//C++算法
#include "head.h"

int arith()
{
    float hats, heads;

    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "输入数字：";
    cin >> hats;
    cout << "再输一个：";
    cin >> heads;

    cout << "hats = " << hats << " ; heads = " << heads << endl;
    cout << "hats + heads = " << hats + heads << endl;
    cout << "hats - heads = " << hats - heads << endl;
    cout << "hats * heads = " << hats * heads << endl;
    cout << "hats / heads = " << hats / heads << endl;
    return 0;
}