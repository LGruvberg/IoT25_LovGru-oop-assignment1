#include <iostream>
#include "UserInterface.hpp"

UserInterface::UserInterface()
	: valueAmountLimit(100) {}

void UserInterface::showMenu() const {
	std::cout
		<< "\n.:MAIN MENU:."
		<< "\n1.\tAdd values"
		<< "\n2.\tStatistics"
		<< "\n3.\tSearch"
		<< "\n4.\tSort"
		<< "\n5.\tSave to.csv"
		<< "\n6.\tEXIT"
		<< "\n\n\tAnswer:\t";
}

/*
projektmapp/
??? main.cpp
??? sensor.h / sensor.cpp
??? measurement.h / measurement.cpp
??? storage.h / storage.cpp
??? utils.h / utils.cpp (vid behov)
??? README.md
*/