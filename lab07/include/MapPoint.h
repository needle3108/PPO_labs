#ifndef MAPPOINT_H
#define MAPPOINT_H

#include<iostream>
#include<cmath>

class MapPoint{
    public:
        void SetName(const char*);                  //metoda przypisujaca skladowej city danego obiketu jakas wartosc - w tym przypadku jest to nazwa miasta    
        void SetCoordinates(double, double);        //metoda przypisujaca skladowym longitude i latitude danego obiektu wartosci 
        void Print();                               //metoda wypisujaca dany obiekt
        void SetInfo(const char*, MapPoint);        //metoda przypisujaca skladowej city wartosc const char* a skladowym longitude i latitude wartosci ktore posiada przekazany obiket jako argument metody
        MapPoint Shift(double, double);             //metoda zwracajaca obiekt dla ktorego wywolalismy ta metode ktoremu zmienilismy skladowe longitude i latitude
        void SetInfo(const char*, double, double);  //metoda przypisujaca skladowej city wartosc const char* a skladowym longitude i latitude wartosci double
        MapPoint Farthest(MapPoint, MapPoint);      //metoda zwracajca obiekt ktory znajduje sie dalej od obiektu na rzecz ktorego wywolujemy ta metode
        double Distance(MapPoint);                  //metoda zwracaja odleglosc pomiedzy obiektem przekazanym jako argument metody a obiektem na rzecz ktorego wywolujemy ta metode

    private:
        const char* city;
        double longitude;
        double latitude;
};

#endif