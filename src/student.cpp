#include "student.h"
#include <string>
Student::Student(){
    name="Jan";
    
    surname="Kowalski";
    yearOfCollege=0;
    ECTSpoints=0;
}
Student::Student(std::string name, std::string surname, int year, int ECTS){
    name=name;
    surname=surname;
    yearOfCollege=year;
    ECTSpoints=ECTS;
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
    name=name;
}
void Student::set_surname(std::string surname){
    surname=surname;
}
void Student::set_year(int year){
    yearOfCollege=year;
}
void Student::set_ECTS(int ECTS){
    ECTSpoints=ECTS;
}

   