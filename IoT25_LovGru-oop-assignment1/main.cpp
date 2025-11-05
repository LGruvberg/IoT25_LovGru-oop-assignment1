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
#include "sensor.hpp"
#include "utils.hpp"

int main()
{
	setupLocale();
	UI::showMenu();

	Sensor tempSensor("TempSensor 1", "°C", 20.0f, 25.0f);
	//Sensor read();

	std::cout << std::endl;
	std::cout
		<< "Reading from " << tempSensor.getName()
		<< " (" << tempSensor.getUnit() << "):\n\t"
		;//<< tempSensor.read() << std::endl;

	return 0;
}