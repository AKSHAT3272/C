#include<iostream>
#include<string>
#include<sstream>
#include "person.h"
using namespace std;
int main(){
int number;
char status;
stringstream out;
string name,rank,major,minor;
int pub,count=0;
cout<<"Enter the number of person you want to enter: "<<endl;
cin>>number;
while(count<number){
    cin>>status;

    if(status == 'p' || status == 'P')
{

    cin>>name>>pub>>rank;
    Professor P(name,pub,rank);
    cout<<P.getdata()<<endl;
}

else if(status == 's' || status == 'S'){
cin>>name>>major>>minor;
Student S(name,major,minor);
cout<<S.getdata()<<endl;
}
count++;
}
return 0;
}
