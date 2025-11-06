/*Rekommenderad filstruktur
projektmapp /
├── main.cpp
├── sensor.h / sensor.cpp
├── measurement.h / measurement.cpp
├── storage.h / storage.cpp
├── utils.h / utils.cpp(vid behov)
└── README.md*/

#include <iostream>
#include <locale>

#include <thread>   //  För std::this_thread::sleep_for
#include <chrono>   //  För std::chrono::seconds

#include "sensor.hpp"
#include "utils.hpp"

void measurement();
void badInput();
void sensor();
void clear_terminal();
void lineBreak();

int main()
{
	//void clear_terminal() { std::cout << "\033[2J\033[1;1H"; } // ANSI escape codes to clear terminal }
	clear_terminal();
	setupLocale();
    int choice = 0;
    do {
        UI::showMenu();
        std::cin >> choice;

        switch (choice) {
        case 1: {
            int limit;
            std::cout << "How many values would you like to add?\n\n\tAnswer:\t";
            std::cin >> limit;

            if (std::cin.fail()) {  // Vid felaktig input
                badInput();
                continue;
            }
            
            // dm.setValueAmountLimit(limit);
            // dm.dataEntry();
            break;
        }
        case 2:
            std::cout << std::endl;
            std::cout << "EMPTY (for now. Come back later!)" << std::endl; break;
            // dm.statFunc(); break;
        case 3:
            std::cout << std::endl;
            std::cout << "EMPTY (for now. Come back later!)" << std::endl; break;
            // dm.searchFunc(); break;
        case 4:
            // dm.sortFunc(); break;
        case 5:
            std::cout << std::endl;
            std::cout << "EMPTY (for now. Come back later!)" << std::endl; break;
            // dm.saveToFileFunc(); break;
        case 6:
            lineBreak();
            std::cout << "\n::Exiting:::\n"; lineBreak(); 
            clear_terminal(); break;
        case 9:
            std::cout << std::endl;
            std::cout << "EMPTY (for now. Come back later!)" << std::endl; break;
            // dm.bmiCalc(); break;
        default:
            std::cout << "Invalid option.\n"; break;
            continue;
        }
        if (std::cin.fail()) {  // Vid felaktig input
            badInput();
            continue;
        }
    } while (choice != 6);


	Sensor tempSensor("TempSensor 1", "°C", 20.0f, 25.0f);
	//Sensor read();

	std::cout << std::endl;
	std::cout
		<< "Reading from " << tempSensor.getName()
		<< " (" << tempSensor.getUnit() << "):\n\t"
		;//<< tempSensor.read() << std::endl;

	return 0;
}

void badInput() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Invalid input, please try again...\n";
}

void sensor() {
	
}
void measurement() {
	// To be implemented
}
void storage() {
	// To be implemented
}
void clear_terminal() {
	std::cout << "\033c";
}

void lineBreak() {
    //  initialization; (runs once at the start)
    //  condition;      (loop while condition is true)
    //  increment;      (runs after each iteration)
    for (size_t i = 0; i < 12; i++) {
        std::cout << ":";
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    std::this_thread::sleep_for(std::chrono::milliseconds(750));
}

/*
//AirSensor.cpp
#include "AirSensor.hpp"
AirSensor::AirSensor(const std::string &name) : Sensor(name) {}

//AirSensor.hpp
#pragma once
#include "Sensor.hpp"
#include "SensorReading.hpp"
class AirSensor : public Sensor {

public:
  AirSensor(const std::string &name);

private:
};


*/