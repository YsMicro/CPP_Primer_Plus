//#include "chapter_4_head.h"

int practice_1()
{
    char fName[40];
    char lName[40];
    char grade;
    int age;
    cout << "���First name?";
    cin.getline(fName, 40);
    cout << "���Last name?";
    cin.getline(lName, 40);
    cout << "�������ĵȼ�?";
    cin >> grade;
    cout << "�������?";
    cin >> age;
    cout << "Name: " << lName << ", " << fName << endl;
    cout << "Grade: " << char(grade + 1) << endl;
    cout << "Age: " << age << endl;
    return 0;
}