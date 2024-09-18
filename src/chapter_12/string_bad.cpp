//
// Created by Vojago on 2024/9/14.
//
#include <cstring>
#include "string_bad.h"

using std::cout;
int StringBad::num_strings = 0;

//构造函数
StringBad::StringBad(const char *s) {
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    num_strings++;
    cout << num_strings << ": \"" << str << "\" 对象被创建\n";
}

StringBad::StringBad() {
    len = 4;
    str = new char[4];
    std::strcpy(str, "C++");
    num_strings++;
    cout << num_strings << ": \"" << str << "\" 默认对象被创建\n";
}

StringBad::~StringBad() {
    cout << "\"" << str << "\" 对象被删除, ";
    --num_strings;
    cout << "剩余：" << num_strings << std::endl;
    delete[] str;
}

std::ostream &operator<<(std::ostream &os, const StringBad &st) {
    os << st.str;
    return os;
}