//ourfunc.cpp 定义自己的函数

#include "head.h"

void simon(int);

int ourfunc_main()
{
    simon(3);
    cout << "Pick an integer:";
    int count;
    cin >> count;
    simon(count);
    cout << "Done!" << endl;
    return 0;
}

void simon(int n)
{
    cout << "Simon 说摸你脚趾 " << n << " 次。" << endl;
    //void 函数不需要 return
}