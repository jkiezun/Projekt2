#include "Faculty.h"
#include<iostream>
using namespace std;
Faculty::Faculty(std::string Name){
    this->name=Name;
}
std::string Faculty::get_name(){
    return name;
}
void Faculty::set_name(std::string Name){
    this->name=Name;
}
void Faculty::show_list_of_employees_1(){
    cout<<"Lista pracowników wydziału: "<<this->get_name()<<" z wypłatą typu short int"<<endl;
    for(auto i =list_of_employees_1.begin(); i!=list_of_employees_1.end(); ++i){
        cout<<"Pracownik nr:"<<(int)(i-list_of_employees_1.begin())+1<<endl;
        cout<<"Imię: "<<i->get_name()<<endl;
        cout<<"Nazwisko: "<<i->get_surname()<<endl;
        cout<<"Zarabia: "<<i->get_salary()<<" zl"<<endl;
        cout<<"Ma "<<i->get_count_of_publication()<<" publikacji"<<endl;

    }
}
void Faculty::show_list_of_employees_2(){
    cout<<"Lista pracowników wydziału: "<<this->get_name()<<" z wypłatą typu int"<<endl;
    for(auto i =list_of_employees_2.begin(); i!=list_of_employees_2.end(); ++i){
        cout<<"Pracownik nr:"<<(int)(i-list_of_employees_2.begin())+1<<endl;
        cout<<"Imię: "<<i->get_name()<<endl;
        cout<<"Nazwisko: "<<i->get_surname()<<endl;
        cout<<"Zarabia: "<<i->get_salary()<<" zl"<<endl;
        cout<<"Ma "<<i->get_count_of_publication()<<" publikacji"<<endl;

    }
}
void Faculty::show_list_of_students(){
    cout<<"Lista studentów wydziału: "<<this->get_name()<<endl;
    for(auto i =list_of_students.begin(); i!=list_of_students.end(); ++i){

        cout<<"Student nr:"<<(int)(i-list_of_students.begin())+1<<endl;
        cout<<"Imię: "<<i->get_name()<<endl;
        cout<<"Nazwisko: "<<i->get_surname()<<endl;
        cout<<"Jest na  "<<i->get_year()<<" roku"<<endl;
        cout<<"Ma "<<i->get_ECTS()<<" punktów ECTS "<<endl;

    }
}
void Faculty::add_short_employee(Employee<short int> employee){
    this->list_of_employees_1.push_back(employee);
}
void Faculty::add_employee(Employee<int> employee){
    this->list_of_employees_2.push_back(employee);
}
void Faculty::add_student(Student student){
    this->list_of_students.push_back(student);
}
