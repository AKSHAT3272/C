/*
 * Temperature.h
 *
 *  Created on: 19-Oct-2017
 *      Author: akshat
 */

#ifndef TEMPERATURE_H_
#define TEMPERATURE_H_

//Temperature Class
class Temperature{
    public:
        //Constructor
        Temperature(float degrees, int system);
        float getCelsius() const;//return celsius
        float getKelvin() const;//return kelvin
        float getFahrenheit() const;//return fahrenheit

        //Parameter system:int identifies C,F or K by following constants.
        static const int CELSIUS = 1; 
        static const int FAHRENHEIT = 2;
        static const int KELVIN = 3;

    private:

        float celsius;
};

#endif /* TEMPERATURE_H_ */

