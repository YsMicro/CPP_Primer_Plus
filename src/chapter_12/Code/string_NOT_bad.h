//
// Created by Vojago on 2024/10/13.
//

#ifndef CPP_PRIMER_PLUS_STRING_NOT_BAD_H
#define CPP_PRIMER_PLUS_STRING_NOT_BAD_H

#include <iostream>

class String_NOT_Bad {
private:
    char *str;
    int len;
    static int num_strings;
public:
    String_NOT_Bad(const char *s);

    String_NOT_Bad();

    ~String_NOT_Bad();

    friend std::ostream &operator<<(std::ostream &os, const String_NOT_Bad &st);
};


#endif //CPP_PRIMER_PLUS_STRING_NOT_BAD_H
