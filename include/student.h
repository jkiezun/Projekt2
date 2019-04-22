#ifndef _STUDENT_
#define _STUDENT_
#include <string>
class Student
{
private:
    std::string name;
    std::string surname;
    int yearOfCollege;
    int ECTSpoints;
public:
    Student();
    Student(std::string name, std::string surname, int year, int ECTS);
    ~Student(){};

    std::string get_name();
    std::string get_surname();
    int get_year();
    int get_ECTS();
    void set_name(std::string name);
    void set_surname (std::string surname);
    void set_year(int year);
    void set_ECTS(int ECTS);
};
#endif