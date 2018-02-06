//============================================================================
// Name        : Inheritance.cpp
// Author      : Akshat
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <sstream>
#include "person.h"
using namespace std;

  Person::Person(string name){
   this->name=name;
   currentID();

  }

  int Person::id = 0;

string Person::getname(){
    return name;
}
int Person::currentID(){
return id;
}
int Person::getid(){
    id = id+1;
     return id;
}

string Person::getdata(){
    stringstream out;
    out<< getname() <<"ID("<<getid()<<")";
    return out.str();
//return cout<<2_string(getname())<<" ID("<<2_string(getid())<<")";
}
