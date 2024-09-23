//
// Created by Vojago on 2024/9/18.
//
#include <iostream>
#include "stock20.h"

const int STOCKS = 4;

[[maybe_unused]] int useStock2() {
    {
// create an array of initialized objects
        Stock20 stocks[STOCKS] = {
                Stock20("NanoSmart", 12, 20.0),
                Stock20("Boffo Objects", 200, 2.0),
                Stock20("Monolithic Obelisks", 130, 3.25),
                Stock20(" Fleep Enterprises", 60, 6.5)
        };

        std::cout << "Stock20 holdings:\n";
        int st;
        for (st = 0; st < STOCKS; st++)
            stocks[st].show();
// set pointer to first element
        const Stock20 *top = &stocks[0];
        for (st = 1; st < STOCKS; st++)
            top = &top->top_val(stocks[st]);
// now top points to the most valuable holding
        std::cout << "\nMost valuable holding:\n";
        top->show();
    }
    // std::cin.get();
    return 0;
}
