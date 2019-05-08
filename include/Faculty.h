#ifndef _FACULTY_
#define _FACULTY_
#include <string>
#include <vector>
#include "Student.h"
#include "Employee.h"

class Faculty
{
private:
    std::string name;
    std::vector <Student> list_of_students;
    std::vector <Employee <short int>> list_of_employees_1;
    std::vector <Employee <int>> list_of_employees_2;


public:
    Faculty(){};
    Faculty(std::string Name);
    ~Faculty(){};

    void show_list_of_employees_1();
    void show_list_of_employees_2();
    void show_list_of_students();
    std::string get_name();
    void set_name(std::string Name);
    void add_short_employee(Employee<short int> employee);
    void add_employee(Employee<int> employee);
    void add_student(Student student);
};

#endif
