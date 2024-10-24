//
// Created by Vojago on 2024/10/17.
//

#include "tab_tenn1.h"
#include <iostream>

TableTennisPlayer1::TableTennisPlayer1(const string &fn, const string &ln, bool ht) : firstname(fn), lastname(ln),
                                                                                      hasTable(ht) {}

void TableTennisPlayer1::Name() const {
    std::cout << lastname << ", " << firstname;
}

// RatedPlayer1 methods
RatedPlayer1::RatedPlayer1(unsigned int r, const string &fn, const string &ln, bool ht) : TableTennisPlayer1(fn, ln, ht) {
    rating = r;
}

RatedPlayer1::RatedPlayer1(unsigned int r, const TableTennisPlayer1 &tp)
        : TableTennisPlayer1(tp), rating(r) {
}

