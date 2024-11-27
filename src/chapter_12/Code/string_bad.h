//
// Created by Vojago on 2024/9/14.
//
#include <iostream>

#ifndef CPP_PRIMER_PLUS_STRING_BAD_H
#define CPP_PRIMER_PLUS_STRING_BAD_H

class StringBad {
private:
    char *str;
    int len;
    static int num_strings;
public:
    StringBad(const char *s);

    StringBad();

    ~StringBad();

    friend std::ostream &operator<<(std::ostream &os, const StringBad &st);
};

#endif //CPP_PRIMER_PLUS_STRING_BAD_H
