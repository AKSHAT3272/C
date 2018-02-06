#ifndef NEGATIVEEXCEPTION_H
#define NEGATIVEEXCEPTION_H
#include<iostream>
#include<climits>
#include<exception>

using namespace std;

//Exception class
class negativeException : public exception {
public:
    negativeException();
    const char * what() const throw();//throws exception

private:
    float num;
};


#endif // NEGATIVEEXCEPTION_H
