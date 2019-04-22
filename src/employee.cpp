#include "employee.h"
template <class Typ> 
Employee <Typ>::Employee(){
    name="Jan";
    surname="Kowalski";
    solary=0;
    count_of_publication=0;
}
template <class Typ> 
Employee <Typ>::Employee(std::string Name, std::string Surname, Typ Solary, short int Count_of_publication){
    name=Name;
    surname=Surname;
    solary=Solary;
    count_of_publication=Count_of_publication;
}

template <class Typ> 
std::string Employee <Typ>::get_name(){
    return name;
}  
template <class Typ> 
std::string Employee <Typ>::get_surname(){
    return surname;
}  
template <class Typ> 
Typ Employee <Typ>::get_solary(){
    return solary;
}  
template <class Typ> 
short int Employee <Typ>::get_count_of_publication(){
    return count_of_publication;
}  
template <class Typ> 
void Employee<Typ>::set_name(std::string Name){
    name=Name;
}
template <class Typ> 
void Employee<Typ>::set_surname(std::string Surname){
    surname=Surname;
}
template <class Typ> 
void Employee<Typ>::set_count_of_publication(short int Count_of_publication){
    count_of_publication=Count_of_publication;
}
template <class Typ> 
void Employee<Typ>::set_solary(Typ Solary){
    solary=Solary;
}
