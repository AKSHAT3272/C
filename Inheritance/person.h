#ifndef PERSON_H
#define PERSON_H
#include<string>
using namespace std;

class Person
{
    public:
        Person();
        Person(string nm);
        string getname();
        //string setname(string name);
        string getdata();
        int getid();
        int currentID();

    private:
        string name;
        static int id;
};

class Professor : public Person
{
    public:
    Professor (string name,int publication, string rn);
       //std::string setRank();
        string getRank();
        //std::string setPublication();
       int getPublication();
       string getdata();
    private:
        string rank;
       int publication;
};
class Student : public Person
{
    public:
        Student(string name,string major,string minor);
       string getMajor();
       string getMinor();
       string getdata();

    private:
        string major;
        string minor;
};

#endif // PERSON_H
