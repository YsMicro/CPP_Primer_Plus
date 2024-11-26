#include "chapter_4_head.h"
#include <array>

int practice_10()
{
    array<double, 3> result;
    cout << "Please enter the results of three 40-meter runs: ";
    cin >> result[0];
    cout << "Please continue: ";
    cin >> result[1];
    cout << "The last time: ";
    cin >> result[2];
    cout << "The three results are as follows: " << result[0] << ", "
        << result[1] << ", " << result[2] << endl;
    cout << "The average score is: " << (result[0] + result[1] + result[2]) / 3 << endl;
    return 0;
}