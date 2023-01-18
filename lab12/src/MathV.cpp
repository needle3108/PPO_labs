#include"MathV.h"

MathV::MathV(int n){
    _n = n;
    m_x[_n];
}

MathV MathV::at(int n) const{
    return this[n];
}

std::ostream& operator << (std::ostream& out, const MathV& v ){ // bedzie nieco inaczej, jesli używacie std::vector 
    out << "[";
    for (int i = 0; i < v._n-1; ++i){
        out << v.m_x[i] << ", ";
    }
    out << v.m_x[v._n-1] << "]";
    return out;
}