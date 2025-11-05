#include <iostream>
#include "Sensor.hpp"
#include "UserInterface.hpp"
#include "utils.h"

int main()
{
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