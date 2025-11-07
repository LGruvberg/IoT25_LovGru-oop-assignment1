#include "sensor.hpp"
#include <random>

#include <iostream>

//// TempSensor class implementation
//void TempSensor::print() const {
//	std::cout
//		<< "Sensor:\t" << type_
//		<< "\nID:\t" << sensorbase_.id_
//		<< "\nValue:\t" << value_ << " " << sensorbase_.unit_
//		<< "\nTime:\t" << sensorbase_.timestamp_ << "\n"
//		;
// }
//// MoistSensor class implementation
//// AmbLightSensor class implementation
//// Communicate with sensors, read values, etc. distribute to plants

Sensor::Sensor(
	const std::string& name, 
	const std::string& unit, 
	float minValue, 
	float maxValue)
	: 
	name(name), 
	unit(unit), 
	minValue(minValue), 
	maxValue(maxValue) {}

// Getters
std::string Sensor::getName()	const { return name; }
std::string Sensor::getUnit()	const { return unit; }
float Sensor::getMinValue()		const { return minValue; }
float Sensor::getMaxValue()		const { return maxValue; }