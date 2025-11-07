#include "utils.hpp"
#include <locale>
//#include <iostream>
#include <limits>
#include <random>
#include <sstream>
#include <fstream>

#include <thread>   //  För std::this_thread::sleep_for
#include <chrono>   //  För std::chrono::seconds

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
		<< "\n6.\t::EXIT::"
		<< "\n9.\tTemperature Sensor"
		<< "\n10.\tMoisture Sensor"
		<< "\n11.\tAmbient Light Sensor"
		<< "\n12.\tExport to .CSV"
		<< "\nChoice:\t"
		;
}


///////////////////////////////////////
//void Utils::dataEntry() {
//    std::cout << "\n\t1. Manual input\n\t2. Generate random\n\n\tAnswer:\t";
//    int choice;
//    std::cin >> choice;
//
//    if (choice == 2) {
//        rndFunc();
//        return;
//    }
//    int count = 1;
//    while (count <= valueAmountLimit) {
//        std::cout << "Value " << count << ": ";
//        std::string input;
//        std::cin >> input;
//
//        if (input == "q") break;
//
//        try {
//            double value = std::stod(input);
//            data.push_back(value);
//            count++;
//        }
//        catch (...) {
//            badInput();
//        }
//    }
//}

//////////////////////////////////////////////////////////

//void UI::convertIntoFile() {
//    if (data.empty()) {
//        std::cout << "No data to write! Add values first.\n";
//        return;
//    }
//    auto now = std::chrono::system_clock::now();
//    std::time_t t = std::chrono::system_clock::to_time_t(now);
//    std::tm local_tm = *std::localtime(&t);
//
//    //  FOLDER NAME (Statistics_YYYY_MM)
//    std::ostringstream folder_ss;
//    folder_ss << "Statistics_" << std::put_time(&local_tm, "%Y_%m");
//    fs::path folder_path = fs::current_path() / folder_ss.str();
//    fs::create_directories(folder_path);
//
//    //  FILE NAME   (Statdata_YYYY_MM_DD_HHhSSs.csv)
//    std::ostringstream file_ss;
//    file_ss << "Statdata_" << std::put_time(&local_tm, "%Y_%m_%d_%Hh%Mm%Ss") << ".csv";
//    fs::path file_path = folder_path / file_ss.str();
//
//    std::ofstream outputFile(file_path);
//    if (!outputFile) {
//        std::cerr << "Failed to create file: " << file_path << ".\n";
//        return;
//    }
//
//    //  Write data
//    outputFile << "Index\t|\tValue\n";  // Column headers
//    for (std::size_t i = 0; i < data.size(); ++i) {
//        outputFile << "\t" << (i + 1) << "\t|\t" << data[i] << "\n";
//    }
//
//    //// outputFile << statFunc;   
//    //double sum = sumFunc();
//    //double mean = meanFunc();
//    //double minVal = *min_element(data.begin(), data.end());
//    //double maxVal = *max_element(data.begin(), data.end());
//    //double variance = varianceFunc();
//    //double stdDevi = sqrt(variance);
//    double bmi = bmi;
//
//    outputFile << "\n.:STATISTICS:.\n";
//    outputFile << "METRIC\t\t|\tVALUE\n";
//    //outputFile << "Sum      \t|\t" << sum << "\n";
//    //outputFile << "Mean     \t|\t" << mean << "\n";
//    //outputFile << "Lowest   \t|\t" << minVal << "\n";
//    //outputFile << "Highest  \t|\t" << maxVal << "\n";
//    //outputFile << "Variance \t|\t" << variance << "\n";
//    //outputFile << "StdDevi  \t|\t" << stdDevi << "\n";
//    outputFile << "BMI  \t|\t" << bmiCalc << "\n"; // Print this in convert file?
//
//    outputFile.close();
//    std::cout << "New .csv file located at: " << file_path << ".\n";
//}