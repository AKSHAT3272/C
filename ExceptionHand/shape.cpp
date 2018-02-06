#include <strstream>
#include<string>
#include<exception>
#include "shapes.h"
#include"negativeException.h"

/*Description: Calls the Rectangle constructor. When Rectangle object is created in main
*             the values are passed through and it.
*
*Param:  float length and width. Gets length and width.
*
*Precondition: none.
*
*Postcondition: gets length and width.
*/
Rectangle::Rectangle(float length, float width) {
    if(length < 0 || width <0){
        throw negativeException();
    }
	this->length = length;
	this->width = width;
}

/*Description: Returns the length of rectangle.
*
*Param: none
*
*Precondition: none.
*
*Postcondition: returns length.
*/
float Rectangle::getlength() const {
	return length;
}

/*Description: Returns the width of rectangle.
*
*Param: none
*
*Precondition: none.
*
*Postcondition: returns width.
*/
float Rectangle::getwidth() const {
	return width;
}
/*Description: Returns the perimeter of rectangle.
*
*Param: none
*
*Precondition: none.
*
*Postcondition: calculates and returns perimeter.
*/
float Rectangle::perimeter() const {
	return 2 * length + 2 * width;
}

/*Description: Returns the area of rectangle.
*
*Param: none
*
*Precondition: none.
*
*Postcondition: calculates and returns area.
*/
float Rectangle::area() const {
	return length * width;
}

/*Description: Returns the formatted string with length,width,area and perimeter.
*
*Param: none
*
*Precondition: none.
*
*Postcondition: returns out string.
*/
std::string Rectangle::str() const {
	std::strstream out;
	// "A rectangle width sides (3,4)"
	out << "A rectangle width sides (" << length << "," << width << ") "<<area()<<" -area "<<perimeter()<<" -Perimeter";;
	return out.str();
}
/******************************/
/*Description: Calls the Square constructor. When Square object is created in main
*             the values are passed through and it.
*
*Param:  float side. Gets side.
*
*Precondition: none.
*
*Postcondition: gets side
*/
Square::Square(float side) : Rectangle(side, side) {
     if(side < 0){
        throw negativeException();
    }
}

/*Description: Returns the formatted string with side,area and perimeter.
*
*Param: none
*
*Precondition: none.
*
*Postcondition: returns out string.
*/
std::string Square::str() const {
	std::strstream out;
	// "A square width sides (3)"

	out << "A square width sides (" << getlength() << ") "<<area()<<" -area "<<perimeter()<<" -Perimeter";

	return out.str();
}
/*Description: Calls the Circle constructor. When Circle object is created in main
*             the values are passed through and it.
*
*Param:  float radius.
*
*Precondition: none.
*
*Postcondition: gets radius.
*/
Circle::Circle(float radius) {
     if(radius < 0){
        throw negativeException();
    }
	this->radius = radius;
}

/*Description: Returns the radius of the circle
*
*Param: none
*
*Precondition: none.
*
*Postcondition: returns radius.
*/
float Circle::getradius() const {
	return radius;
}

/*Description: Returns the perimeter of the circle
*
*Param: none
*
*Precondition: none.
*
*Postcondition: calculates and returns perimeter.
*/
float Circle::perimeter() const {
	return 2 * radius * PI;
}

/*Description: Returns the area of the circle
*
*Param: none
*
*Precondition: none.
*
*Postcondition: calculates and returns area.
*/
float Circle::area() const {
	return PI * radius * radius;
}

/*Description: Returns the formatted string with area,area and perimeter.
*
*Param: none
*
*Precondition: none.
*
*Postcondition: returns out string.
*/
std::string Circle::str() const{
	std::strstream out;
	// "A circle width radius (3)"

	out << "A circle with radius (" << radius << ") " <<area()<<" -area "<<perimeter()<" -Perimeter ";
	return out.str();
}

/***************************************************************************/
/*Description: Calls the Exception constructor.
*
*Param:  none.
*
*Precondition: none.
*
*Postcondition: Throws negative number exception.
*/
negativeException::negativeException(){
}

const char* negativeException::what() const throw()
  {
    return "Negative numbers";
  }


