//
// Created by Vojago on 2024/3/16.
//
//#include "chapter_5_head.h"
#include <iostream>
#include <string>

int forstr2()
{
    using namespace std;
    cout << "输入一个单词：";
    string word;
    cin >> word;

    char temp;
    int i, j;
    for (j = 0, i = word.size()-1; j < i; --i, ++j) {
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }
    cout << word << "\nDone\n";
    return 0;
}