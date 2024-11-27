//
// Created by Vojago on 2024/10/17.
//

#ifndef CPP_PRIMER_PLUS_TAB_TENN1_H
#define CPP_PRIMER_PLUS_TAB_TENN1_H

#include <string>

using std::string;

class TableTennisPlayer1 {
private:
    string firstname;
    string lastname;
    bool hasTable;
public:
    TableTennisPlayer1(const string &fn = "none", const string &ln = "none", bool ht = false);

    void Name() const;

    bool HasTable() const { return hasTable; };

    void ResetTable(bool v) { hasTable = v; };
};

// simple derived class
class RatedPlayer1 : public TableTennisPlayer1 {
private:
    unsigned int rating;
public:
    RatedPlayer1(unsigned int r = 0, const string &fn = "none",
                 const string &ln = "none", bool ht = false);

    RatedPlayer1(unsigned int r, const TableTennisPlayer1 &tp);

    unsigned int Rating() const { return rating; }

    void ResetRating(unsigned int r) { rating = r; }
};

#endif //CPP_PRIMER_PLUS_TAB_TENN1_H
