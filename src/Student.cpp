#include "Student.h"
#include <string>
#include <iostream>
Student::Student() : Person() {
    this->yearOfCollege = 0;
    this->ECTSpoints = 0;
}

Student::Student(std::string name, std::string surname, int year, int ECTS) : Person(name, surname), yearOfCollege(year), ECTSpoints(ECTS) {
}

Student::~Student() {
}
int Student::get_year(){
   return yearOfCollege;
}
int Student::get_ECTS(){
  return ECTSpoints;
}
void Student::set_year(int year){
    try {
        if (yearOfCollege < 1)
            throw "Year of college can't be lower than 1.";
        this->yearOfCollege=yearOfCollege;
    }
    catch (const char* e) {
        std::cerr<<"ERROR: "<<e;
    }
}
void Student::set_ECTS(int ECTS){
    try {
        if (ECTS < 0)
            throw "ECTS can't be lower than 0.";
        this->ECTSpoints=ECTS;
    }
    catch (const char* e) {
        std::cerr<<"ERROR: "<<e;
    }
}
void Student::print_info() {
    std::cout<<"STUDENT'S INFORMATION\n";
    std::cout<<"Name: "<<this->get_name()<<", Surname: "<< this->get_surname()<<", Year of college: "<<this->get_year()<<", ECTS: "<<this->get_ECTS()<<"\n\n";
}
   