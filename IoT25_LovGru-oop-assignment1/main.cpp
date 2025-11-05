#include <iostream>		// DOING
#include <vector>		// TODO
#include <string>		// TODO
#include <cmath>		// TODO
#include <chrono>		// TODO
#include <fstream>		// TODO
#include "Sensor.hpp"


int main()
{
	std::cout << "Hello from CLion!" << std::endl;
	Sensor tempSensor("TempSensor 1", "�C", 20.0f, 25.0f);
	//Sensor read();

	std::cout << std::endl;
	std::cout
		<< "Reading from " << tempSensor.getName()
		<< " (" << tempSensor.getUnit() << "):\n\t"
		;//<< tempSensor.read() << std::endl;

	return 0;
}