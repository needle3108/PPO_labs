#pragma once

#include"MathObj.h"
#include<vector>

class MathV : public MathObj{
    public:
        //konstruktor objektu MathV
        MathV(int n) : _size(n), _w(n) {
            for(int i=0; i<n; i++){
                _w[i] = 0;
                _name = "Vector";
            }
        }

        //przeladowanie operatora <<
        friend std::ostream &operator<<(std::ostream &o, const MathV &object);

    protected:
        int _size;
        std :: vector<int> _w;
};

inline std::ostream &operator<<(std::ostream &o,const MathV& object)
{
    o<<"[";
    for(int i=0; i<object._size-1; i++){
        o<<object._w[i]<<", ";
    }
    o<<object._w[object._size-1]<<"]";
    
    return o;
}