#pragma once
#include <string>

// Skapa en Sensor-klass med:
//	-	Ett namn (till exempel "TempSensor 1")
//	-	Enhet (till exempel "°C")
//	-	Simuleringsintervall (min- och maxvärde)
//	-	En metod read() som returnerar ett slumpmässigt flyttal inom det givna intervallet

class Sensor 
{
private:
	std::string name;
	std::string unit;
	float minValue;
	float maxValue;
public:	
	// Constructor
	Sensor(	const std::string& name, 
			const std::string& unit, 
			float minValue, 
			float maxValue);

	// Getters
	std::string getName() const;
	std::string getUnit() const;
	float getMinValue() const;
	float getMaxValue() const;
};