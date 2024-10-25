#include "head.h"

int hexoct2()
{
    int chest = 42;//十进制整型文字
    int waist = 42;//十六进制整型文字
    int inseam = 42;//八进制整型文字

    cout << "先生身材真不错！\n";
    cout << "胸围 = " << chest << " (十进制的 42)" << endl;
    cout << hex;//改变数字基础
    cout << "胸围 = " << waist << " (十六进制的 42)" << endl;
    cout << oct;
    cout << "胸围 = " << inseam << " (八进制的 42)" << endl;
    return 0;
}