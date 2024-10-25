#include "head.h"

int hexoct1()
{
    int chest = 42;//十进制整型文字
    int waist = 0x42;//十六进制整型文字
    int inseam = 042;//八进制整型文字

    cout << "先生身材真不错！\n";
    cout << "胸围 = " << chest << " (42 在十进制中)\n";
    cout << "胸围 = " << waist << " (42 在十六进制中)\n";
    cout << "胸围 = " << inseam << " (42 在八进制中)\n";
    return 0;
}