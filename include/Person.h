#ifndef _PERSON_
#define _PERSON_
#include <string>
class Person
{
private:
    std::string name;
    std::string surname;
public:
    Person();
    Person(std::string name, std::string surname);
    ~Person();

    std::string get_name();
    std::string get_surname();
    void set_name(std::string name);
    void set_surname (std::string surname);
    virtual void print_info();
};
#endif