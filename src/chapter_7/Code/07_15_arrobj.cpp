//
// Created by Vojago on 2024/12/2.
//
// arrobj.cpp -- 使用array对象的函数
#include <iostream>
#include <array>
#include <string>
const int SEASONS = 4;
const std::array<std::string, SEASONS> SEASON_NAMES = {"Spring", "Summer", "Fall", "Winter"};
// 修改array对象
void fill(std::array<double, SEASONS>* pa);
void show(std::array<double, SEASONS> da);
int code_15_arrobj()
{
    std::array<double, SEASONS> expenses;
    fill(&expenses);
    show(expenses);
    return 0;
}

void fill(std::array<double, SEASONS>* pa)
{
    using namespace std;
    for (int i = 0; i < SEASONS; i++)
    {
        cout << "Enter " << SEASON_NAMES[i] << " expenses: ";
        cin >> (*pa)[i];
    }
}

void show(std::array<double, SEASONS> da)
{
    using namespace std;
    double total = 0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < SEASONS; i++)
    {
        cout << SEASON_NAMES[i] << ": $" << da[i] << endl;
        total += da[i];
    }
    cout << "\nTotal Expenses: $" << total << endl;
}
