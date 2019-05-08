#include "Employee.h"
template <typename Typ> 
Employee <Typ>::Employee(){
    this->name="Jan";
    this->surname="Kowalski";
    this->salary=0;
    this->count_of_publication=0;
}
template <typename Typ> 
Employee <Typ>::Employee(std::string Name, std::string Surname, Typ salary, short int Count_of_publication){
    this->name=Name;
    this->surname=Surname;
    this->salary=salary;
    this->count_of_publication=Count_of_publication;
}

template <typename Typ> 
std::string Employee <Typ>::get_name(){
    return name;
}  
template <typename Typ> 
std::string Employee <Typ>::get_surname(){
    return surname;
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
void Employee<Typ>::set_name(std::string Name){
    this->name=Name;
}
template <typename Typ> 
void Employee<Typ>::set_surname(std::string Surname){
    this->surname=Surname;
}
template <typename Typ> 
void Employee<Typ>::set_count_of_publication(short int Count_of_publication){
    this->count_of_publication=Count_of_publication;
}
template <typename Typ> 
void Employee<Typ>::set_salary(Typ salary){
    this->salary=salary;
}
template class Employee<int>;
template class Employee<short int>;