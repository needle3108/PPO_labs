#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include<iostream>
#include<vector>
#include"Grade.h"

class GradeBook{
    public:
        //metoda dodajaca dany obiekt do _dziennik
        void Insert(const Grade&);
        //metoda dodajaca dany obiekt do _dziennik
        void Insert(const Grade*);

        //metoda zwracajaca wskaznik na obiekt typu const o zadanym indeksie w _dziennik
        const Grade* GetPtrConst(int);
        //metoda zwracajaca wskaznik na obiekt o zadanym indeksie w _dziennik
        Grade* GetPtr(int);

        //metoda wypisujaca _dziennik na ekran
        void Print(std::string);

        //destruktor
        ~GradeBook();

    private:
        std :: vector<const Grade*> _dziennik;
};

#endif