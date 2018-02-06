#include<iostream> //input output stream
#include "Temperature.h" // header file Temperature

int main(){

        
        float temp;//variable
        int unit;//variable
        std::cout<<"Enter temperature:";
        std::cin>>temp;
        std::cout<<"Enter unit for given temperature- "<<std::endl;
        std::cout<<" 1 for Celsius \n 2 for Fahrenheit \n 3 for Kelvin"<<std::endl;
        std::cin>>unit;
        if(unit == 1){
            //The given temperature is in Celsius.
        std::cout<<"Celsius: " <<temp<<std::endl;
        //Calls the function Temperature(degrees, system)
        Temperature t(temp, Temperature::CELSIUS);
        //Gets the temperarue in Fahrenheit.
        std::cout<<"Fahrenheit: " <<t.getFahrenheit()<<std::endl;
        //Gets the temperarue in Kelvin.
        std::cout<<"Kelvin: " <<t.getKelvin()<<std::endl;
        }
        
        else if(unit == 2){
        //The given temperature is in Fahrenheit.
        std::cout<<"Fahrenheit: " <<temp<<std::endl;
        //Calls the function Temperature(degrees, system)
        Temperature t(temp, Temperature::FAHRENHEIT);
        //Gets the temperarue in Celsius
        std::cout<<"Celsius: " <<t.getCelsius()<<std::endl;
        //Gets the temperarue in Kelvin.
        std::cout<<"Kelvin: " <<t.getKelvin()<<std::endl;
        }
        
         else if(unit == 3){
        //The given temperature is in Kelvin.
        std::cout<<"Kelvin: " <<temp<<std::endl;
        //Calls the function Temperature(degrees, system)
        Temperature t(temp, Temperature::KELVIN);
        //Gets the temperarue in Celsius
        std::cout<<"Celsius: " <<t.getCelsius()<<std::endl;
        //Gets the temperarue in Fahrenheit.
        std::cout<<"Fahrenheit: " <<t.getFahrenheit()<<std::endl;
        }
        
        else
        return 0;
}

