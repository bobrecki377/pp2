#include <iostream>
#include <utility>
using namespace std;

#include "user.h"
#include "windows.h"
/*
#ifndef _MSC_FULL_VER // if not Visual Studio Compiler
#warning "Funkcje sa do zaimplementowania. Instrukcja w pliku naglowkowym"
#else
#pragma message ("Funkcje sa do zaimplementowania. Instrukcja w pliku naglowkowym")
#endif*/





size_t Windows::activated_systems_ =0;
size_t Windows::activated_systems() {
    return activated_systems_;
}

std::size_t Windows::add_user(std::string user,std::string pass){
    User user37;
    user37.user_name_=std::move(user);
    user37.password_=std::move(pass);
    users_.push_back(user37);
    return users_.size() - 1;
}
//User Windows::user(std::size_t id){
//  return users_.at(id);
//}
//    C:\Users\username
std::string Windows::user_home_directory(int id){
    std::string path="C:\\Users\\"+users_.at(id).user_name_;
    return path;
}

