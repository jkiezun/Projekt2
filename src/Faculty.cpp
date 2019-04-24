#include "Faculty.h"
Faculty::Faculty(std::string Name){
    this->name=Name;
}
std::string Faculty::get_name(){
    return name;
}
void Faculty::set_name(std::string Name){
    this->name=Name;
}