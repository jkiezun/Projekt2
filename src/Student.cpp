#include "Student.h"
#include <string>
Student::Student(){
    this->name="Jan";
    this->surname="Kowalski";
    this->yearOfCollege=0;
    this->ECTSpoints=0;
}
Student::Student(std::string name, std::string surname, int year, int ECTS){
    this->name=name;
    this->surname=surname;
    this->yearOfCollege=year;
    this->ECTSpoints=ECTS;
}
std::string Student::get_name(){
   return name;

}
std::string Student::get_surname(){
    return surname;
}
int Student::get_year(){
   return yearOfCollege;
}
int Student::get_ECTS(){
  return ECTSpoints;
}
void Student::set_name(std::string name){
    this->name=name;
}
void Student::set_surname(std::string surname){
    this->surname=surname;
}
void Student::set_year(int year){
    this->yearOfCollege=year;
}
void Student::set_ECTS(int ECTS){
    this->ECTSpoints=ECTS;
}

   