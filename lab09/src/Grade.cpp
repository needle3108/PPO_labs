#include"Grade.h"

int Grade::ID = 0;

Grade::Grade(){
};

Grade::Grade(std::string name, float ocena):_name(name), _ocena(ocena){
    ID++;
    _id = ID;
};

const Grade* GetPtrConstGrade(std::string name, float ocena){
    const Grade* ptr = new Grade(name,ocena);
    return ptr;
}



void Grade::Print() const{
    std :: cout<<"Student ("<<_name<<") grade (ID="<<_id<<") = "<<_ocena<<std::endl;
}