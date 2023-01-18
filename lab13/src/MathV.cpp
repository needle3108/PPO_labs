#include"MathV.h"

int& MathV::at(int i) const
{
    return _wektor[i];
}

int MathV::operator*(const MathV& w1)
{
    if(this -> _rozmiar != w1._rozmiar)
    {
        std::cout<<"[Error] MathV:: vectors of different dimensions! (returning -100)"<<std::endl;
        return -100;
    }

    int dot = 0;
    for(int i=0; i<w1._rozmiar; i++)
    {
        dot += this -> _wektor[i] * w1._wektor[i];
    }

    return dot;
}

MathV &MathV::operator++()
{
    for(int &d : _wektor)
    {
        d++;
    }

    return *this;
}

MathV MathV::operator++(int)
{
    MathV temp = *this;
    ++*this;
    return temp;
}