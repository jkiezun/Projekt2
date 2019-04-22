#include "faculty.h"
Faculty::Faculty(std::string Name){
    name=Name;
}
std::string Faculty::get_name(){
    return name;
}
void Faculty::set_name(std::string Name){
    name=Name;
}