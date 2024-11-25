//�����͸������
#include "chapter_3_head.h"

int divide()
{
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "����������9 / 5 = " << 9 / 5 << endl;
    cout << "���������9.0 / 5.0 = ";
    cout << 9.0 / 5.0 << endl;
    cout << "��ϳ�����9.0 / 5 = " << 9.0 / 5 << endl;
    cout << "double ������1E7 / 9.0 = ";
    cout << 1.E7 / 9.0 << endl;
    cout << "float ������1e7f / 9.0f = ";
    cout << 1.e7f / 9.0f << endl;
    return 0;
}
