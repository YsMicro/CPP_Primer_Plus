//
// Created by Vojago on 2024/10/8.
//
#include <iostream>
#include "stoneWT.h"

using std::cout;

void display(const Stone_wt &st, int n);

[[maybe_unused]] int stone_main() {
    Stone_wt incognito = 275;
    Stone_wt wolfe(285.7);
    Stone_wt taft(21, 8);

    cout << "The celebrity weighed ";
    incognito.show_stn();
    cout << "The detective weighed ";
    wolfe.show_stn();
    cout << "The President weighed ";
    taft.show_lbs();
    incognito = 276.8;
    taft = 325;
    cout << "After dinner, the celebrity weighed ";
    incognito.show_stn();
    cout << "After dinner, the President weighed ";
    taft.show_lbs();
    display(taft, 2);
    cout << "The wrestler weighed even more.\n";
    display(422, 2);
    cout << "No stone left unearned\n";
    // std::cin.get();
    return 0;
}

void display(const Stone_wt &st, int n) {
    for (int i = 0; i < n; ++i) {
        cout << "Wow! ";
        st.show_stn();
    }
};