#include<iostream>
#include<string>
#include<sstream>
#include "person.h"
using namespace std;

Student::Student(string name,string major, string minor) : Person::Person(name) {
this->major  = major;
this->minor = minor;
}

string Student::getMajor(){
return major;
}
string Student::getMinor(){
return minor;
}

string Student::getdata(){
stringstream out;
    out<< getMajor() <<"major"<< Person::getdata() <<"minors in"<< getMinor() ;
    return out.str();
}
