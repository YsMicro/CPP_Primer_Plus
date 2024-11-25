#include "chapter_3_head.h"

int oil()
{
    double kilometer, oil_liter;

    cout << "�����������";
    cin >> kilometer;

    cout << "�����������";
    cin >> oil_liter;

    double kilometer_per_liter = kilometer / oil_liter;
    cout << "ƽ��������Ϊ "
        << 100 / kilometer_per_liter << " L/100km" << endl;
    return 0;
}