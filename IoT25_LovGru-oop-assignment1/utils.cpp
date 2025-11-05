#include "utils.h"
#include <locale>

void UI::showMenu() {
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