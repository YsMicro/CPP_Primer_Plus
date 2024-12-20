//
// Created by Vojago on 2024/9/14.
//
#include <iostream>
#include "1004_stock10.h"

[[maybe_unused]] int code_1006_useStock1() {
    {
        using std::cout;
        cout << "Using constructors to create new objects\n";
        Stock10 stock1("NanoSmart", 12, 20.0);            // syntax 1
        stock1.show();
        Stock10 stock2 = Stock10("Boffo Objects", 2, 2.0); // syntax 2
        stock2.show();

        cout << "Assigning stock1 to stock2:\n";
        stock2 = stock1;
        cout << "Listing stock1 and stock2:\n";
        stock1.show();
        stock2.show();

        cout << "Using a constructor to reset an object\n";
        stock1 = Stock10("Nifty Foods", 10, 50.0);    // temp object
        cout << "Revised stock1:\n";
        stock1.show();
        cout << "Done\n";
    }
    // std::cin.get();
    return 0;
}
