#include <iostream>
using namespace std;

#include "user.h"
#include "linux.h"

#ifndef _MSC_FULL_VER // if not Visual Studio Compiler
    #warning "Funkcje sa do zaimplementowania. Instrukcja w pliku naglowkowym"
#else
    #pragma message ("Funkcje sa do zaimplementowania. Instrukcja w pliku naglowkowym")
#endif
std::size_t Linux::open_source_sympathizers_;
std::string Linux::distribution(){
    return this->distribution_;
}
std::size_t Linux::open_source_sympathizers(){
    return open_source_sympathizers_;
}
std::size_t Linux::add_user(std::string user,std::string pass){
    User user37;
    user37.user_name_=user;
    user37.password_=pass;
    users_.push_back(user37);
    return users_.size() - 1;
}

std::string Linux::user_home_directory(std::size_t id){
    std::string path="/home/"+users_.at(id).user_name_+"/";
    return path;
}
std::optional<std::string> Linux::graphic_environment(){
    return graphic_environment_;
}
void Linux::set_graphic_environment(std::string graph){
    graphic_environment_ = graph;
}
//xd