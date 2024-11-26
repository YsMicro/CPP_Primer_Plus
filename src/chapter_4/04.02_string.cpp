//�������д洢�ַ���
//#include "chapter_4_head.h"
#include <cstring>

#include <iostream>
using namespace std;
int strings()
{
    const int SIZE = 15;
    char name1[SIZE] = {0};//������
    char name2[SIZE] = "C++owboy";//��ʼ������

    cout << "Howdy! I'm " << name2;
    cout << " �� What's your name?\n";
    cin >> name1;
    cout << "Well, " << name1 << " ,your name has ";
    cout << strlen(name1) << " letters and is stored\n";
    cout << "in an array of " << sizeof(name1) << " Bytes.\n";
    cout << "Youe initial is " << name1[0] << ".\n";
    name2[3] = '\0';
    cout << "Here are the first 3 characters of mt name: ";
    cout << name2 << endl;
    return 0;
}