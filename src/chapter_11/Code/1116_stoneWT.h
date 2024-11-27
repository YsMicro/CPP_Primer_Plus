//
// Created by Vojago on 2024/10/8.
//

#ifndef CPP_PRIMER_PLUS_STONEWT_H
#define CPP_PRIMER_PLUS_STONEWT_H

class Stone_wt {
private:
    enum {
        Lbs_per_stn = 14
    };
    int stone;
    double pds_left;
    double pounds;
public:
    Stone_wt(double lbs);

    Stone_wt(int stn, double lbs);

    Stone_wt();

    ~Stone_wt();

    void show_lbs() const;

    void show_stn() const;

};

#endif //CPP_PRIMER_PLUS_STONEWT_H
