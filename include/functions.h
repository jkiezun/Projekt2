#ifndef _FUNCTIONS_
#define _FUNCTIONS_
#include <string>

void show_student(std::string name, std::string surname);
void show_student(std::string name, std::string surname, int ECTS, int year);

template<typename T>
void show_employee(std::string name, std::string surname, T solary, short int count_of_publication);

#endif
