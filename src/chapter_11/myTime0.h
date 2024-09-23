//
// Created by Vojago on 2024/9/23.
//

#ifndef CPP_PRIMER_PLUS_MYTIME0_H
#define CPP_PRIMER_PLUS_MYTIME0_H

class Time0 {
private:
    int hours;
    int minutes;
public:
    Time0();

    Time0(int h, int m = 0);

    void AddMin(int m);

    void AddHr(int h);

    void Reset(int h = 0, int m = 0);

    Time0 Sum(const Time0 &t) const;

    void Show() const;
};

#endif //CPP_PRIMER_PLUS_MYTIME0_H
