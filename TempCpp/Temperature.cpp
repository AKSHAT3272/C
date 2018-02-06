#include<iostream>
#include<strstream>
#include"Temperature.h"

/*Descripton: Calls the Temperature constructor. When Temperature object is created in main 
*             the values are passed through and it identifies the system and converts the degrees into celsius.
*
*Param:  float degrees: temperature scale.
        int system: system should be 1,2,3 (i.e, C,F or K).
*Precondition: a valid temperature and system should be provided.
*
*Postcondition: the given degree is converted to celsius.
*/
Temperature::Temperature(float degrees, int system)
{
    if(system == CELSIUS)
        this->celsius = degrees;
    else if(system == KELVIN)
       celsius =  degrees - 273.15;
    else 
    celsius = (degrees - 32) * 5/9;
}   


/*Description: Gets the Temperature in celsius
*
*Precondition: none
*
*Postcondition: the Temperature in degree celsius is returned.
*/
    float Temperature::getCelsius() const{
        return celsius;

}

/*Description: Converts the celsius Temperature to Fahrenheit
*
*Precondition: none
*
*Postcondition: the Temperature in degree Fahrenheit is returned.
*/

    float Temperature::getFahrenheit() const{
        return (celsius - 32)* 5/9;
}

/*Description: Converts the celsius Temperature to Kelvin
*
*Precondition: none
*
*Postcondition: the Temperature in degree Kelvin is returned.
*/
     float Temperature::getKelvin() const{
        return celsius + 273.15;
}


