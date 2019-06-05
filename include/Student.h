#ifndef _STUDENT_
#define _STUDENT_
#include <string>
#include "Person.h"
class Student : public Person
{
private:
    int yearOfCollege;
    int ECTSpoints;
public:
    Student();
    Student(std::string name, std::string surname, int year, int ECTS);
    ~Student();


    int get_year();
    int get_ECTS();
    void set_year(int year);
    void set_ECTS(int ECTS);
    virtual void print_info();
};
#endif