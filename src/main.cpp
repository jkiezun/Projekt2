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
    stu->set_ECTS(-1);
    stu->set_year(0);

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
    emp3.set_salary(-200);
    emp3.set_count_of_publication(-1);

    Person person1;
    person1.set_name("Josh");
    person1.set_surname("Bostic");
    person1.print_info();

    Person *emp2 = new Employee<int>("Jan", "Pawlak", 2000, 3);
    emp2->print_info();
    

	Person *stu2 = new Student("Marek", "Janiak", 4, 30);
	stu2->print_info();
	
    delete stu;
	delete emp2;
	delete stu2;
	
    return 0;
}
