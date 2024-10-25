//整型限制溢出
#include "head.h"
#define ZERO 0
#include <climits>

int exceed()
{
    short sam = SHRT_MAX;
    unsigned short sue = sam;
    
    cout << "Sam 有 " << sam << " 美元，Sue 有 " << sue;
    cout << " 美元的存款。" << endl
    << "给每人增加一美元。" << endl << "现在 ";
    sam = sam + 1;
    sue = sue + 1;
    cout << "Sam 有 " << sam << " 美元，Sue 有 " << sue;
    cout << " 美元的存款。\n可怜的 Sam ！" << endl;
    sam = ZERO;
    sue = ZERO;
    cout << "Sam 有 " << sam << " 美元，Sue 有 " << sue;
    cout << " 美元的存款。" << endl;
    cout << "每人拿走一美元。" << endl << "现在 ";
    sam = sam - 1;
    sue = sue - 1;
    cout << "Sam 有 " << sam << " 美元，Sue 有 " << sue;
    cout << " 美元的存款。" << endl << " 走运的 Sue ！" << endl;
    return 0;
}