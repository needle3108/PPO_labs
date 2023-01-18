#pragma once

#include<iostream>

class MathObj{
    public:
        //przeladowanie operatora <<
        friend std::ostream &operator<<(std::ostream &o, const MathObj &object);\
        //funktor
        friend class MatvMatcher;

        std:: string _name;
};

inline std::ostream &operator<<(std::ostream &o,const MathObj& object)
{
    o<<"ObjName: "<<object._name;
    
    return o;
}

class MathMatcher{
    public:
        //konstruktor kopiujacy
        MathMatcher(MathObj& o) : _object(o) {};

        //definiowanie operatora (), aby ta klasa mogla byc funktorem
        bool operator()(const MathObj& o){
            if(_object._name != o._name) return 0;

            return 1;
        }

    private:
        MathObj _object;
};