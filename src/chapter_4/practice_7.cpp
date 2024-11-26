//#include "chapter_4_head.h"
#include <string>

#include <iostream>
using namespace std; practice_7()
{
    struct Pizza
    {
        string company;
        double diameter;
        double weight;
    };
    Pizza pizza;
    cout << "company:";
    getline(cin, pizza.company);
    cout << "diameter:";
    cin >> pizza.diameter;
    cout << "weight:";
    cin >> pizza.weight;
    cout << pizza.company << endl;
    cout << pizza.diameter << endl;
    cout << pizza.weight << endl;
    return 0;
}