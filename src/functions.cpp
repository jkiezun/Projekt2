#include "functions.h"
#include <iostream>
using namespace std;
void show_student(std::string name, std::string surname){
    cout<<"To jest student : "<<name<<" "<<surname<<endl;
}
void show_student(std::string name, std::string surname, int ECTS, int year){
    cout<<"To jest student : "<<name<<" "<<surname<<endl;
    cout<<"Jest on/ona na "<<year<<" roku studiów i posiada "<<ECTS<<" punktów ECTS"<<endl;
}

template<typename T>
void show_employee(std::string name, std::string surname, T solary, short int count_of_publication){
    cout<<"To jest pracownik : "<<name<<" "<<surname<<endl;
    cout<<"Ma on/ona "<<count_of_publication<<" publikacji i otrzymuje wypłatę w wyskości "<<solary<<" zł"<<endl;
}