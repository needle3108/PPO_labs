#include"Grade.h"

 int Grade::count = 0;

void Grade::Print(std::string info) const{
    std::cout<<info<<"Student ("<<_name<<") grade (ID="<<_id<<") = "<<_ocena<<std::endl;
}

void Grade::SetStudent(std:: string n){
    _name = n;
}

double Grade::Value(double val) const{
    _ocena = val;
    return _ocena;
}

std::string Grade::GetName() const{
    return _name;
}

int Grade::GetId() const{
    return _id;
}

double Grade::GetGrade() const{
    return _ocena;
}