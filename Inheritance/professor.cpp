
#include "person.h"
#include<iostream>
#include<string>
#include<sstream>

using namespace std;
Professor::Professor(string name, int publication, string rn):Person::Person(name){
this->publication = publication;
this->rank = rn;
}

string Professor::getRank(){
return rank;
}

int Professor::getPublication(){
return publication;
}

string Professor::getdata(){
stringstream out;
    out<<getRank()<<" "<<Person::getdata()<<"has"<<getPublication()<<"Publications"<<endl;
    return out.str();
}

