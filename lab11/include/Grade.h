#ifndef GRADE_H
#define GRADE_H

#include<iostream>

class Grade{
    //zmienna statyczna potrzebna do ustawiania odpowiednich ID dla kolejnych tworzonych obiektow
    static int count;

    public:
        //konstruktor tworzacy obiekt o podanych parametrach
        Grade(std::string n, double o) : _name(n), _ocena(o), _id(++count) {};
        //metoda wypisujaca informacje na ekran
        void Print(std::string) const;
        //metoda ustawiajaca skladowa _name
        void SetStudent(std::string);

        //metoda ustawiajaca skladowa _ocena i zwracajaca jej wartosc
        double Value(double) const;
        //konstruktor kopiujacy 
        Grade(const Grade& g) : _name(g._name + " COPY"), _ocena(g._ocena), _id(g._id) {};
        //metoda zwracajaca wartosc skladowej _name
        std::string GetName() const;
        //metoda zwracajaca wartosc skladowej _id
        int GetId() const;
        //metoda zwracajaca wartosc skladowej _ocena
        double GetGrade() const;

    private:
        std :: string _name;
        double mutable _ocena;
        int _id;
};

#endif