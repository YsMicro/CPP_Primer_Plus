//
// Created by Vojago on 2024/9/25.
//

#ifndef CPP_PRIMER_PLUS_MYTIME2_H
#define CPP_PRIMER_PLUS_MYTIME2_H

class Time2 {
private:
    int hours;
    int minutes;
public:
    Time2();

    Time2(int h, int m = 0);

    void AddMin(int m);

    void AddHr(int h);

    void Reset(int h = 0, int m = 0);

    Time2 operator+(const Time2 &t) const;

    Time2 operator-(const Time2 &t) const;

    Time2 operator*(double n) const;

    void Show() const;
};


#endif //CPP_PRIMER_PLUS_MYTIME2_H
