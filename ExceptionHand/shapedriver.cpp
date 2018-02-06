#include <iostream>
#include <string>
#include<sstream>
#include "shapes.h"

//Main Class
int main() {

    int l,w,r; //Variables
    char s;
    std::cout<<"Do you want area/perimeter for a square,rectange or a circle? (s,r,c)?"<<std::endl;
    std::cin>>s;
    if(s == 's'){
        try{//try the exception
        std::cout<<"Enter length - "<<std::endl;
        std::cin>>l;
        }catch(negativeException e){//if the number entered is negative catch the exception
        cerr<<"Exception: "<<e.what()<<endl;
        return 1;
        }
        Square s(l);
        std::cout << s.str() << std::endl; //print string
    }

    else if(s == 'r'){
        try{//try the exception
        std::cout<<"Enter length and width - "<<std::endl;
        std::cin>>l>>w;
        }catch(negativeException e){//if the number entered is negative catch the exception
        cerr<<"Exception: "<<e.what()<<endl;
        return 1;
        }
        Rectangle r(l,w);
        std::cout << r.str() << std::endl;//print string


    }

    else if(s == 'c'){
        try{//try the exception
        std::cout<<"Enter Radius - "<<std::endl;
        std::cin>>r;
        }catch(negativeException e){//if the number entered is negative catch the exception
        cerr<<"Exception: "<<e.what()<<endl;
        return 1;
        }
        Circle c(r);
        std::cout << c.str() << std::endl;//print string
    }
	return 0;
}
