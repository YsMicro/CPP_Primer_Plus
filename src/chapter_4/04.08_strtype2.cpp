#include "chapter_4_head.h"
#include <string>

int strtype2()
{
    string s1 = "penguin";
    string s2, s3;

    cout << "����Է���һ�� String �������һ����s2 = s1\n";
    s2 = s1;
    cout << "s1: " << s1 << ", s2: " << s2 << endl;
    cout << "����Է���һ�� C ����ַ�����һ���ַ�������\n";
    cout << "s2 = \"buzzard\"\n";
    s2 = "buzzard";
    cout << "s2: " << s2 << endl;
    cout << "����������ַ�����s3 = s1 + s2\n";
    s3 = s1 + s2;
    cout << "s3: " << s3 << endl;
    cout << "����Ը����ַ�����\n";
    s1 += s2;
    cout << "s1 += s2 �õ� s1 = " << s1 << endl;
    s2 += " for a day";
    cout << "s2 += \" for a day\" �õ� s2 = " << s2 << endl;
    return 0;
}