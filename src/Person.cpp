#include "Person.h"
#include <string>
#include <iostream>
Person::Person() {
    this->name = "Jan";
    this->surname = "Kowalski";
}

Person::Person(std::string name, std::string surname) : name(name), surname(surname) {
}
Person::~Person() {
}
std::string Person::get_name() {
    return this->name;
}
std::string Person::get_surname() {
    return this->surname;
}
void Person::set_name(std::string name) {
    try {
        if (name.length() == 0)
            throw "Name can't be empty!\n";
        this->name = name;
    }
    catch (const char* h) {
        std::cerr<<"ERROR: "<<h<<"\n"; 
    } 
}
void Person::set_surname(std::string surname) {
    try {
        if (surname.length() == 0)
            throw "Surname can't be empty!\n";
        this->surname = surname;
    }
    catch (const char* h) {
        std::cerr<<"ERROR: "<<h<<"\n\n"; 
    }
}
void Person::print_info() {
    std::cout<<"PERSON'S INFORMATION\n";
    std::cout<<"Name: "<<this->get_name()<<", Surname: "<< this->get_surname()<<"\n\n";
}
