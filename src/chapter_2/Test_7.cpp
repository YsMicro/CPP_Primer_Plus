//��ʾʱ��
#include "head.h"

void time(int h, int m)
{
    cout << endl << "ʱ�䣺" << h << ":" << m << endl;
}

int time_main()
{
    int h;
    int m;
    cout << "����Сʱ��";
    cin >> h;
    cout << endl << "������ӣ�";
    cin >> m;
    time(h,m);
    return 0;
}