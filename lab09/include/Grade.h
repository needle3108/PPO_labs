#ifndef GRADE_H
#define GRADE_H

#include<iostream>

class Grade{
    public:
    static int ID;
    Grade();
    Grade(std::string , float );
    static const Grade* GetPtrConstGrade(std::string, float);

    void Print() const;

    private:
        std :: string _name;
        float _ocena;
        int _id;
};

#endif