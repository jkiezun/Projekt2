#ifndef _EMPLOYEES_
#define _EMPLOYEES_
#include <string>
#include "Person.h"
template <typename Typ>
class Employee : public Person
{
private:
    Typ salary;
    short int count_of_publication;

public:
    Employee();
    Employee(std::string Name, std::string Surname, Typ salary, short int Count_of_publication);
    virtual ~Employee();

    Typ get_salary();
    short int get_count_of_publication();
    void set_salary(Typ salary);
    void set_count_of_publication(short int Count_of_publication);
    virtual void print_info();
};
#endif