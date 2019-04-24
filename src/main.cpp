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
    
    Employee <int> emp();
    
    return 0;
}