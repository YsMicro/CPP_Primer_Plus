//
// Created by Vojago on 2024/9/18.
//

#ifndef CPP_PRIMER_PLUS_STOCK20_H
#define CPP_PRIMER_PLUS_STOCK20_H

#include <string>

class Stock20 {
private:
    std::string company;
    int shares;
    double share_val;
    double total_val;

    void set_tot() { total_val = shares * share_val; }

public:
    Stock20();

    Stock20(const std::string &co, long n = 0, double pr = 0.0);

    ~Stock20();

    void buy(long num, double price);

    void sell(long num, double price);

    void update(double price);

    void show() const;

    const Stock20 &top_val(const Stock20 &s) const;
};


#endif //CPP_PRIMER_PLUS_STOCK20_H
