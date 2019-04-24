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
    std::vector <Employee <int>> list_of_employees_1;
    std::vector <Employee <int>> list_of_employees_2;


public:
    Faculty(std::string Name);
    ~Faculty(){};
    
    std::string get_name();
    void set_name(std::string Name);
};

#endif
