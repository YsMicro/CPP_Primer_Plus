//
// Created by Vojago on 2024/9/14.
//
#include <iostream>

using std::cout;

#include "string_bad.h"

void callme1(StringBad &);

void callme2(StringBad);

[[maybe_unused]] int vegNews_main() {
    using std::endl;
    {
        cout << "启动内部块.\n";
        StringBad headline1("Celery Stalks at Midnight");
        StringBad headline2("Lettuce Prey");
        StringBad sports("Spinach Leaves Bowl for Dollars");
        cout << "headline1: " << headline1 << endl;
        cout << "headline2: " << headline2 << endl;
        cout << "sports: " << sports << endl;
        callme1(headline1);
        cout << "headline1: " << headline1 << endl;
        callme2(headline2);
        cout << "headline2: " << headline2 << endl;
        cout << "将一个对象初始化为另一个对象:\n";
        StringBad sailor = sports;
        cout << "sailor: " << sailor << endl;
        cout << "将一个对象赋值给另一个对象:\n";
        StringBad knot;
        knot = headline1;
        cout << "knot: " << knot << endl;
        cout << "结束代码块.\n";
    }
    cout << "main()函数结束\n";
    return 0;
}

void callme1(StringBad &rsb) {
    cout << "通过引用传递的字符串:\n";
    cout << "    \"" << rsb << "\"\n";
}

void callme2(StringBad sb) {
    cout << "通过值传递的字符串:\n";
    cout << "    \"" << sb << "\"\n";
}