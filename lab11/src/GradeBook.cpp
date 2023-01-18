#include"GradeBook.h"

void GradeBook::Insert(const Grade& g){
    Grade *new_g = new Grade(g);
    _dziennik.push_back(new_g);
}

void GradeBook::Insert(const Grade* g){
    _dziennik.push_back(g);
}

void GradeBook::Print(std::string info){
    for(auto x : _dziennik){
        std :: cout<<info<<"Student ("<<x->GetName()<<") grade (ID="<<x->GetId()<<") = "<<x->GetGrade()<<std::endl;
    }
}

const Grade* GradeBook::GetPtrConst(int i){
    return _dziennik[i];
}

Grade* GradeBook::GetPtr(int i){
    return const_cast<Grade*>(_dziennik[i]);
}

GradeBook::~GradeBook()
{
    for(auto x : _dziennik){
        delete x;
    }
}