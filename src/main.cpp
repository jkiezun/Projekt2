#include "Student.h"
#include "Employee.h"
#include "Faculty.h"
#include "University.h"
#include "functions.h"
#include <iostream>

using namespace std;
int main(){

    Student *stu = new Student("Janek", "Nowak", 5, 6);
    stu->set_year(5);
    stu->set_ECTS(40);
    stu->set_name("Janek");
    show_student(stu->get_name(), stu->get_surname());
    show_student(stu->get_name(), stu->get_surname(),stu->get_ECTS(), stu->get_year());
    cout<<endl;



    Employee <int> emp;
    emp.set_name("Barbara");
    emp.set_surname("Nowak");
    emp.set_salary(13000);
    emp.set_count_of_publication(222);
    show_employee(emp.get_name(), emp.get_surname(),emp.get_salary(), emp.get_count_of_publication());
    cout<<endl;

    Employee <short int> emp2;
    emp2.set_name("Jan");
    emp2.set_surname("Nowak");
    emp2.set_salary(1300);
    emp2.set_count_of_publication(2);

    Employee <int> emp3;
    emp3.set_name("Jan");
    emp3.set_surname("Nowak");
    emp3.set_salary(1300);
    emp3.set_count_of_publication(2);


    Faculty facul;
    facul.set_name("EiTI");
    facul.add_employee(emp);
    facul.add_employee(emp3);
    facul.show_list_of_employees_2();
    cout<<endl;
    facul.add_short_employee(emp2);
    facul.show_list_of_employees_1();
    cout<<endl;
    cout<<endl;
    facul.add_student(*stu);
    facul.show_list_of_students();
    

    University uni;
    uni.set_name("Politechnika");
    uni.add_new_faculty("Fizyka");
    uni+facul;
    uni.show_list_of_faculties();


    return 0;
}