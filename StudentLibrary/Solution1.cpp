#include "Solution1.h"

// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_1


/*		Celsius to Fahrenheit °F = 9/5 (°C) + 32
 *		Kelvin to Fahrenheit °F = 9/5 (K - 273) + 32
 *		Fahrenheit to Celsius °C = 5/9 (°F - 32)
 *		Celsius to Kelvin K = °C + 273
 *		Kelvin to Celsius °C = K - 273
 *		Fahrenheit to Kelvin K = 5/9 (°F - 32) + 273
 */
float Solution1::ConvertTemperature(float _value, TemperatureUnits _from, TemperatureUnits _to)
{
	float res = 0.00;
	if (_from == TemperatureUnits::CELSIUS && _to == TemperatureUnits::FAHRENHEIT) {
		res = (9.00/5.00) * _value + 32.00;
		return res;
	}
	if (_from == TemperatureUnits::CELSIUS && _to == TemperatureUnits::KELVIN) {
		res = _value + 273.15;
		return res;
	}
	if (_from == TemperatureUnits::KELVIN && _to == TemperatureUnits::FAHRENHEIT) {
		res = (9.00/5.00) * (_value - 273.15) + 32.00;
		return res;
	}
	if (_from == TemperatureUnits::KELVIN && _to == TemperatureUnits::CELSIUS) {
		res = _value - 273.15;
		return res;
	}
	if (_from == TemperatureUnits::FAHRENHEIT && _to == TemperatureUnits::CELSIUS) {
		res = (5.00 / 9.00) * (_value - 32.00);
		return res;
	}
	if (_from == TemperatureUnits::FAHRENHEIT && _to == TemperatureUnits::KELVIN) {
		res = (5.00 / 9.00) * (_value - 32.00) + 273.15;
		return res;
	}
	else {
		res = _value;
		return res;
	}
	//return -1.0f;
}

#endif
