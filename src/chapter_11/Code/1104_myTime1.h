//
// Created by Vojago on 2024/9/23.
//

#ifndef CPP_PRIMER_PLUS_MYTIME1_H
#define CPP_PRIMER_PLUS_MYTIME1_H


class Time1 {
private:
    int hours;
    int minutes;
public:
    Time1();

    Time1(int h, int m = 0);

    void AddMin(int m);

    void AddHr(int h);

    void Reset(int h = 0, int m = 0);

    Time1 operator+(const Time1 &t) const;

    void Show() const;
};


#endif //CPP_PRIMER_PLUS_MYTIME1_H
