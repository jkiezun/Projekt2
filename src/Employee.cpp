#include "Employee.h"
#include <iostream>
template <typename Typ> 
Employee <Typ>::Employee() : Person(){
    this->salary=0;
    this->count_of_publication=0;
}
template <typename Typ> 
Employee <Typ>::Employee(std::string name, std::string surname, Typ salary, short int Count_of_publication) : Person(name, surname) {
    this->salary=salary;
    this->count_of_publication=Count_of_publication;
}

template <typename Typ>
Employee <Typ>::~Employee() {
}

template <typename Typ> 
Typ Employee <Typ>::get_salary(){
    return salary;
}  
template <typename Typ> 
short int Employee <Typ>::get_count_of_publication(){
    return count_of_publication;
}  

template <typename Typ> 
void Employee<Typ>::set_count_of_publication(short int Count_of_publication){
    try {
        if (count_of_publication < 0)
            throw "Count of publications can't be lower than 0.";
        this->count_of_publication=count_of_publication;
    }
    catch (const char* e) {
        std::cerr<<"ERROR: "<<e;
    }
}
template <typename Typ> 
void Employee<Typ>::set_salary(Typ salary){
    try {
        if (salary < 0)
            throw "Salary can't be lower than 0.";
        this->salary=salary;
    }
    catch (const char* e) {
        std::cerr<<"ERROR: "<<e;
    }
}

template <typename Typ>
void Employee<Typ>::print_info() {
    std::cout<<"EMPLOYEE'S INFORMATION\n";
    std::cout<<"Name: "<<this->get_name()<<", Surname: "<< this->get_surname()<<", Salary: "<<
    this->get_salary()<<", Number of publications: "<< this->get_count_of_publication()<<"\n\n"; 
}
template class Employee<int>;
template class Employee<short int>;