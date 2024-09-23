//
// Created by Vojago on 2024/9/23.
//

#ifndef CPP_PRIMER_PLUS_MYTIME0_H
#define CPP_PRIMER_PLUS_MYTIME0_H

class Time {
private:
    int hours;
    int minutes;
public:
    Time();

    Time(int h, int m = 0);

    void AddMin(int m);

    void AddHr(int h);

    void Reset(int h = 0, int m = 0);

    Time Sum(const Time &t) const;

    void Show() const;
};

#endif //CPP_PRIMER_PLUS_MYTIME0_H
