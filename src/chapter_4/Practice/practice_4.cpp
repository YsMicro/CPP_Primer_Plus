#include <iostream>
using namespace std;
//#include "chapter_4_head.h"
#include <string>

int practice_4()
{
    string first_name, last_name;
    string full_name;

    cout << "�������firstname��";
    getline(cin, first_name);
    cout << "�������lastname��";
    getline(cin, last_name);
    full_name = last_name + ", " + first_name;
    cout << "�ڵ����ַ�������ʾ��Ϣ��" << full_name << endl; 
    return 0;
}