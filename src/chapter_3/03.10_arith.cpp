//C++�㷨
#include "head.h"

int arith()
{
    float hats, heads;

    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "�������֣�";
    cin >> hats;
    cout << "����һ����";
    cin >> heads;

    cout << "hats = " << hats << " ; heads = " << heads << endl;
    cout << "hats + heads = " << hats + heads << endl;
    cout << "hats - heads = " << hats - heads << endl;
    cout << "hats * heads = " << hats * heads << endl;
    cout << "hats / heads = " << hats / heads << endl;
    return 0;
}