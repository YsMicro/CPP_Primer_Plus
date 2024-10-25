//char型与int型对比
#include "head.h"

int morechar()
{
    char ch = 'M';
    int i = ch;
    cout << ch << " 的ASCII码是 " << i << " 。" << endl;

    cout << "字符码加一：" << endl;
    ch = ch + 1;
    i = ch;
    cout << ch << " 的ASCII码是 " << i << " 。" << endl;

    //使用 cout.put() 成员函数显示字符
    cout << "使用 cout.put() 函数显示 ch ：";
    cout.put(ch);

    //使用 cout.put() 显示字符常量
    cout.put('!');
    
    cout << endl << "完毕" << endl;
    return 0;
}