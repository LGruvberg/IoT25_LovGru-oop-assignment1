#include <iostream>
#include "Sensor.hpp"

int main()
{
	Sensor tempSensor("TempSensor 1", "°C", 20.0f, 25.0f);
	//Sensor read();

	std::cout << std::endl;
	std::cout
		<< "Reading from " << tempSensor.getName()
		<< " (" << tempSensor.getUnit() << "):\n\t"
		;//<< tempSensor.read() << std::endl;

	return 0;
}