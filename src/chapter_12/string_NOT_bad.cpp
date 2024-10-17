//
// Created by Vojago on 2024/10/13.
//

#include "string_NOT_bad.h"
#include <cstring>

using std::cout;
int String_NOT_Bad::num_strings = 0;

//构造函数
String_NOT_Bad::String_NOT_Bad(const char *s) {
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    num_strings++;
    cout << num_strings << ": \"" << str << "\" 对象被创建\n";
}

//String_NOT_Bad::String_NOT_Bad() {
//    len = 4;
//    str = new char[4];
//    std::strcpy(str, "C++");
//    num_strings++;
//    cout << num_strings << ": \"" << str << "\" 默认对象被创建\n";
//}
String_NOT_Bad::String_NOT_Bad() {
    len = 0;
    str = new char [1];
    str[0] = '\0';
}

String_NOT_Bad::~String_NOT_Bad() {
    cout << "\"" << str << "\" 对象被删除, ";
    --num_strings;
    cout << "剩余：" << num_strings << std::endl;
    delete[] str;
}

std::ostream &operator<<(std::ostream &os, const String_NOT_Bad &st) {
    os << st.str;
    return os;
}