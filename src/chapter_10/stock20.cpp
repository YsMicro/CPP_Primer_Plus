//
// Created by Vojago on 2024/9/18.
//
#include <iostream>
#include "stock20.h"

Stock20::Stock20() {
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock20::Stock20(const std::string &co, long n, double pr) {
    company = co;
    if (n < 0) {
        std::cout << "股份数字不能为负数; " << company << " 股份设置为 0 .\n";
        shares = 0;
    } else
        shares = n;
    share_val = pr;
    set_tot();
}

Stock20::~Stock20() {

}

void Stock20::buy(long num, double price) {
    if (num < 0) {
        std::cout << "购买的股份数量不能为负数. " << "交易中止.\n";
    } else {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock20::sell(long num, double price) {
    using std::cout;
    if (num < 0) {
        std::cout << "购买的股份数量不能为负数. " << "交易中止.\n";

    } else if (num > shares) {
        std::cout << "卖出的股份不能超过现有的股份! " << "交易中止.\n";
    } else {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock20::update(double price) {
    share_val = price;
    set_tot();
}

void Stock20::show() const {
    using std::cout;
    using std::ios_base;
    ios_base::fmtflags orig =
            cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);

    cout << "Company: " << company
         << " Shares: " << shares << std::endl;
    cout << " Share Price: $" << share_val;
    cout.precision(2);
    cout << " Total Worth: $" << total_val << std::endl;
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}

const Stock20 &Stock20::top_val(const Stock20 &s) const {
    if (s.total_val > total_val)
        return s;
    else
        return *this;
}