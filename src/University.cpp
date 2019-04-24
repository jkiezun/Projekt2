#include "University.h"
University::University(std::string Name){
    this->name=Name;
}
std::string University::get_name(){
    return name;
}
void University::set_name(std::string Name){
    this->name=Name;
}