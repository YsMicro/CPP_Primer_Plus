#include "chapter_4_head.h"
#include <array>

int practice_10()
{
    array<double, 3> result;
    cout << "�������γɼ���";
    cin >> result[0];
    cin >> result[1];
    cin >> result[2];
    double(avg_result) = (result[0] + result[1] + result[2]) / 3;
    cout << "���ηֱ��ǣ�" << result[0] << ", "
        << result[1] << ", " << result[2] << endl;
    cout << "ƽ���ɼ���" << avg_result << endl;
    return 0;
}