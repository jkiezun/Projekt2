#ifndef _UNIVERSITY_
#define _UNIVERSITY_
#include <string>
#include <vector>
#include "Faculty.h"

class University
{
private:
    std::string name;
    std::vector <Faculty> list_of_faculties;
public:
    University(){};
    University(std::string Name);
    ~University(){};

    std::string get_name();
    void set_name(std::string Name);
    void operator+(Faculty);
    void show_list_of_faculties();
};

#endif