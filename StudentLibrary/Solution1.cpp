#include "Solution1.h"
#include<iostream>
#include<string>
// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_1

float Solution1::ConvertTemperature(float _value, TemperatureUnits _from, TemperatureUnits _to)
{
	double temp = _value;
	double new_temp = 0;
	switch (_from)
	{
	case TemperatureUnits::CELSIUS:
		if (_to == TemperatureUnits::FAHRENHEIT)
		{
			new_temp = 9 / 5 * (temp)+32;
		}
		if (_to == TemperatureUnits::CELSIUS)
		{
			new_temp = temp;
		}
		else
		{
			new_temp = temp + 273;

		}
		break;
	case TemperatureUnits::FAHRENHEIT:
		if (_to == TemperatureUnits::CELSIUS)
		{
			new_temp = 5/9*(temp - 32);
		}
		if (_to == TemperatureUnits::FAHRENHEIT)
			{
				new_temp = temp;
			}
		else
		{
			new_temp = 5 / 9 * (temp - 32) + 273;

		}
		break;
	case TemperatureUnits::KELVIN:
		if (_to == TemperatureUnits::CELSIUS)
		{
			new_temp = temp - 273;
		}
		if (_to == TemperatureUnits::KELVIN)
		{
			new_temp = temp;
		}
		else
		{
			new_temp = 9 / 5 *(temp - 273) + 32;

		}
		break;
	default:
		break;
	}
	new_temp = round(new_temp * 100.0) / 100.0;
	std::cout << new_temp;

	return new_temp;
}

#endif
