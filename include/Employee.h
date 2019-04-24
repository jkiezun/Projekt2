#ifndef _EMPLOYEES_
#define _EMPLOYEES_
#include <string>
template <typename Typ>
class Employee
{
private:
    std::string name;
    std::string surname;
    Typ solary;
    short int count_of_publication;

public:
    Employee();
    Employee(std::string Name, std::string Surname, Typ Solary, short int Count_of_publication);
    ~Employee(){};

    std::string get_name();
    std::string get_surname();
    Typ get_solary();
    short int get_count_of_publication();
    void set_name(std::string Name);
    void set_surname (std::string Surname);
    void set_solary(Typ Solary);
    void set_count_of_publication(short int Count_of_publication);
};
#endif