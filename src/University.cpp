#include "University.h"
#include <iostream>

using namespace std;
University::University(std::string Name){
    this->name=Name;
}
std::string University::get_name(){
    return name;
}
void University::set_name(std::string Name){
    this->name=Name;
}
void University::add_new_faculty(std::string Name){
    Faculty *facul = new Faculty(Name);
    this->list_of_faculties.push_back(*facul);
}
void University::add_faculty(Faculty faculty){
    this->list_of_faculties.push_back(faculty);
}
void University::operator+(Faculty f){
    this->list_of_faculties.push_back(f);
}
void University::show_list_of_faculties(){
    cout<<"Lista wydziałów uczelni: "<<this->get_name()<<endl;
    for(auto i =list_of_faculties.begin(); i!=list_of_faculties.end(); ++i){
        cout<<"Wydział: "<<i->get_name()<<endl;
    }
}
