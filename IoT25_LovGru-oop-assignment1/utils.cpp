#include "utils.hpp"
#include <locale>

#ifdef _WIN32 
#include <windows.h> 
#endif

void setupLocale() {
#ifdef _WIN32
	// Set to UTF-8 for console to know how to interpret "odd" characters
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
#endif

	//	Set C/C++ locale to user's default environment locale
	std::setlocale(LC_ALL, "");
	std::locale::global(std::locale(""));

	// Ensure iostreams use the global locale (maybe this isn't necessary)
	std::cout.imbue(std::locale());
	std::wcout.imbue(std::locale());	// w(ide)c(haracter)ou(tput)
	// cout is 8-bit 'char', wcout is wide-character wchar_t, which usually is 16-bit or 32-bit
	// imbue is stream member function setting the locale up for a stream

}

void UI::showMenu() {
	std::cout
		<< "\n.:MAIN MENU:."
		<< "\n1.\tAdd values"
		<< "\n2.\tStatistics"
		<< "\n3.\tSearch"
		<< "\n4.\tSort"
		<< "\n5.\tSave to.csv"
		<< "\n6.\tEXIT"
		//<< "\nAnswer\t->"
		;
}