//使用取余操作把磅转化为英石
#include "head.h"

int modulus()
{
    const int Lbs_per_stn = 14;
    int lbs;

    cout << "输入你体重的磅数：";
    cin >> lbs;
    int stone = lbs / Lbs_per_stn;
    int pounds = lbs % Lbs_per_stn;
    cout << lbs << " 磅是 " << stone << " 英石 " << pounds << " 磅。\n";
    return 0;
}
