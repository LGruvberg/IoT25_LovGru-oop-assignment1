#pragma once
#include <string>
#include <iostream>
#include <vector>

class UserInterface {
private:
    std::vector<double> data;
    int valueAmountLimit;

public:
    UserInterface();
    void showMenu() const;
};