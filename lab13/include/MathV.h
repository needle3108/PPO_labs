#pragma once

#include<iostream>
#include<vector>

class MathV{
    //deklaracja przyjazni 
    friend class MathVMatcher;

    public:
        //przeladowanie operatora <<
        friend std::ostream &operator<<(std::ostream &o, const MathV &object);

        //konstruktor
        MathV(int n) : _rozmiar(n), _wektor(n) {};

        //metoda zwracajaca adres do miejsca w wektorze o podanym indexie
        int& at(int ) const;
        
        //przeladowanie operatora *
        int operator*(const MathV&);

        //przeladowanie operatora preinkrementacji
        MathV &operator++();
        
        //przeladowanie operatora postinkrementacji
        MathV operator++(int);


    private:
    int _rozmiar;
    mutable std :: vector<int> _wektor;
};

inline std::ostream &operator<<(std::ostream &o,const MathV& object)
{
    o<<"[";
    for(int i=0; i<object._rozmiar-1; i++)
    {
        o<<object._wektor[i]<<", ";
    }
    o<<object._wektor[object._rozmiar-1]<<"]";

    return o;
}

class MathVMatcher{
    public:
        //konstruktor kopiujacy
        MathVMatcher(MathV& w) : _w(w) {};
        
        //definiowanie operatora (), aby ta klasa mogla byc funktorem
        bool operator()(const MathV& w)
        {
            for(int i=0; i<_w._rozmiar; i++)
            {
                if(w._wektor[i] != _w._wektor[i])
                return 0; 
            }
            return 1;
        }

    private:
        const MathV _w;
};