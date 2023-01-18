#ifndef MAPPOINT_H
#define MAPPOINT_H

#include<iostream>

class MapPoint{

    static double latitude;
    static double longitude;

    public:
        static void PrintDefaults();                            //metoda wypisujaca na ekran defaultowe wartosci skladowych statycznych
        static void DefaultLongitude(double);                   //metoda przypisujaca do skladowej statycznej longitude wartosc przekazana jako argument metody
        static void DefaultLatitude(double);                    //metoda przypisujaca do skladowej statycznej latitude wartosc przekazana jako argument metody
        static double DefaultLongitude();                       //metoda zwracajaca wartosc skladowej statycznej longitude
        static double DefaultLatitude();                        //metoda zwracajaca wartosc skladowej statycznej latitude

        MapPoint& SetCoordinates(const double, const double);   //metoda przypisujaca podane jako argumenty wartosci do skladowych longitude i latitutde danego obiektu i zwracajaca ten obiekt 

        void SetName(std::string);                              //metoda przypisujaca argument metody do skladowej name dla obiektu dla ktorego ta metoda zostala wywolana
        void Print() const;                                     //metoda wypisujaca na ekran skladowe obiektu na rzecz ktorego ta metoda zostala wywolana      

        MapPoint Clone() const;                                 //metoda zwracajaca kopie obiektu const, dla ktorego metoda zostala wywolana
        MapPoint Clone();                                       //metoda zwracajaca kopie obiektu not-const, dla ktorego metoda zostala wywolana

    private:
        std::string name;
        double latit;
        double longi;
};

#endif