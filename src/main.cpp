#include "Student.h"
#include "Employee.h"
#include "Faculty.h"
#include "University.h"
#include "functions.h"
#include "Person.h"
#include <iostream>

using namespace std;
int main() {

    Student *stu = new Student("Janek", "Nowak", 5, 6);
    stu->set_year(5);
    stu->set_ECTS(40);
    stu->set_name("Janek");
    show_student(stu->get_name(), stu->get_surname());
    show_student(stu->get_name(), stu->get_surname(),stu->get_ECTS(), stu->get_year());
    stu->print_info();
    cout<<endl;

    Employee <int> emp;
    emp.set_name("Barbara");
    emp.set_surname("Nowak");
    emp.set_salary(13000);
    emp.set_count_of_publication(222);
    emp.print_info();

    
    Employee <int> emp3;
    emp3.set_name("Jan");
    emp3.set_surname("Nowak");
    emp3.set_salary(1300);
    emp3.set_count_of_publication(2);
    emp3.print_info();
    
    Employee <int> *emp2 = new Employee<int>;

    Person person1;
    person1.set_name("Josh");
    person1.set_surname("Bostic");
    person1.print_info();

    University uni;
    uni.set_name("Politechnika");
    uni.add_new_faculty("Fizyka");
    uni.show_list_of_faculties();

    delete stu;
    delete emp2;
 
    return 0;
}