/* This program converts temperatures between Fahrenheit, Celsius, and Kelvin.
*
* Author: Akshat Patel
*
* Date: 05/09/2017
*/

#include <stdio.h>
#include<ctype.h>
/* Description: The program gets the user given temperature in Celsius,Kelvin or Fahrenheit and converts it
*to other to units.
*
*  Pre/Postcondition: If the temperature unit is left blank the program ends.
*
*  Returns 0 on sucess or Returns 1 when temperature unit is 0 or left blank.
*/
 int main (void)
{

float temp, celsius, fahrenheit, kelvin = 0; //variables

char unit; //variable to enter temperature c,f or k.

//User enters temperature.
printf ("Enter input temperature: ");
//Temperature unit should be followed by c,f or k.
scanf ("%f%c", &temp, &unit);

//If the temperature entered is in Celsius it converts into Fahrenheit and Kelvin.
if (unit == 'c' || unit == 'C')
    {
//Converts the given temperature
fahrenheit = (temp * 1.8) + 32;
kelvin = temp + 273.15;
//Displays the converted temperature
printf("%0.2f Celsius converts to:\n\t%0.2f F\n\t%0.2f K\n",temp,fahrenheit,kelvin);


return 0;

}

//If the temperature entered is in Kelvin it converts into Celsius and Fahrenheit.
  else if (unit == 'k' || unit == 'K')
    {
//Converts the given temperature
celsius = temp - 273.15;
fahrenheit = (celsius * 1.8) + 32;
//Displays the converted temperature
printf("%0.2f Kelvin converts to:\n\t%0.2f C\n\t%0.2f F\n",temp,celsius,fahrenheit);

return 0;

}
//If the temperature entered is in Fahrenheit it converts into Celsius and Kelvin.
  else if (unit == 'f' || unit == 'F')
    {
//Converts the given temperature
celsius = (temp - 32) / 1.8 ;
kelvin = celsius + 273.15;
//Displays the converted temperature
printf("%0.2f Fahrenheit converts to:\n\t%0.2f C\n\t%0.2f K\n",temp,celsius,kelvin);

return 0;

}

/*IF the temperature unit is blank or the user enters characters other than c,f or k
* the program prints an error message and closes.*/
  else {
      puts("Invalid temperature scale");
      return 1;
  }

 return 0;

}

