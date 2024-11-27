//
// Created by Vojago on 2024/10/8.
//
#include <iostream>
#include "1116_stoneWT.h"

using std::cout;

Stone_wt::Stone_wt(double lbs) {
    stone = int(lbs) / Lbs_per_stn;
    pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
}

Stone_wt::Stone_wt(int stn, double lbs) {
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
}

Stone_wt::Stone_wt() {
    stone = pounds = pds_left = 0;
}

Stone_wt::~Stone_wt() {}

void Stone_wt::show_stn() const {
    cout << stone << " stone, " << pds_left << " pounds\n";
}

void Stone_wt::show_lbs() const {
    cout << pounds << " pounds\n";
}