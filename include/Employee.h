#ifndef _EMPLOYEES_
#define _EMPLOYEES_
#include <string>
template <typename Typ>
class Employee
{
private:
    std::string name;
    std::string surname;
    Typ salary;
    short int count_of_publication;

public:
    Employee();
    Employee(std::string Name, std::string Surname, Typ salary, short int Count_of_publication);
    ~Employee(){};

    std::string get_name();
    std::string get_surname();
    Typ get_salary();
    short int get_count_of_publication();
    void set_name(std::string Name);
    void set_surname (std::string Surname);
    void set_salary(Typ salary);
    void set_count_of_publication(short int Count_of_publication);
};
#endif