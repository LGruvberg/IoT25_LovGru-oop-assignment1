#include "sensor.hpp"
#include <random>

// MoistSensor class implementation
// TempSensor class implementation
// AmbLightSensor class implementation
// Communicate with sensors, read values, etc. distribute to plants

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