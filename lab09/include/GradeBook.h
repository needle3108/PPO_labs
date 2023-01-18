#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include<iostream>
#include"Grade.h"

class GradeBook{
    public:
        static int w;
        void Insert(const Grade*);
        void Print() const;
        void AddGrade(std::string, float);

    private:

        GradeBook **_wsk;
};

#endif