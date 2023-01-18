#pragma once

#include"MathObj.h"

class MathC : public MathObj{
    public:
        //konstruktor obiektu MathC
        MathC() {
            _real = 0;
            _imaginary = 0;
            _name = "Complex";
        }

        //przeladowanie operatora <<
        friend std::ostream &operator<<(std::ostream &o, const MathV &object);

        int _real;
        int _imaginary;
};

inline std::ostream &operator<<(std::ostream &o,const MathC& object)
{
    o<<object._real<<"+"<<object._imaginary<<"i";
    
    return o;
}