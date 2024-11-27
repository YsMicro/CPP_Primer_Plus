//
// Created by Vojago on 2024/10/17.
//
#include <iostream>
#include "tab_tenn1.h"

[[maybe_unused]] int use_tt1(void) {
    using std::cout;
    using std::endl;
    TableTennisPlayer1 player1("Tara", "Boomdea", false);
    RatedPlayer1 r_player1(1140, "Mallory", "Duck", true);
    r_player1.Name();          // derived object uses base method
    if (r_player1.HasTable())
        cout << ": has a table.\n";
    else
        cout << ": hasn't a table.\n";
    player1.Name();           // base object uses base method
    if (player1.HasTable())
        cout << ": has a table";
    else
        cout << ": hasn't a table.\n";
    cout << "Name: ";
    r_player1.Name();
    cout << "; Rating: " << r_player1.Rating() << endl;
// initialize RatedPlayer1 using TableTennisPlayer1 object
    RatedPlayer1 r_player2(1212, player1);
    cout << "Name: ";
    r_player2.Name();
    cout << "; Rating: " << r_player2.Rating() << endl;
    // std::cin.get();
    return 0;
}
