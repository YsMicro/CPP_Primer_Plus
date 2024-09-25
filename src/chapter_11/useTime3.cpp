//
// Created by Vojago on 2024/9/25.
//
#include <iostream>
#include "myTime3.h"

[[maybe_unused]] int my_time3() {


    using std::cout;
    using std::endl;
    Time3 aida(3, 35);
    Time3 tosca(2, 48);
    Time3 temp;

    cout << "Aida and Tosca:\n";
    cout << aida<<"; " << tosca << endl;
    temp = aida + tosca;     // operator+()
    cout << "Aida + Tosca: " << temp << endl;
    temp = aida* 1.17;  // member operator*()
    cout << "Aida * 1.17: " << temp << endl;
    cout << "10.0 * Tosca: " << 10.0 * tosca << endl;
	// std::cin.get();
    return 0;


}