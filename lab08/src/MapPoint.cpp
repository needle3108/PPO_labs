#include"MapPoint.h"

double MapPoint::latitude = 0;
double MapPoint::longitude = 0;

void MapPoint::PrintDefaults(){
    std :: cout<<"Deafult MP position:: Latitude: "<<latitude<<", Longitude: "<<longitude<<std::endl;
}

void MapPoint::DefaultLongitude(double lon){
    longitude = lon;
}

void MapPoint::DefaultLatitude(double lat){
    latitude = lat;
}

double MapPoint::DefaultLongitude(){
    return longitude;
}

double MapPoint::DefaultLatitude(){
    return latitude;
}

MapPoint& MapPoint::SetCoordinates(const double a, const double b){
    latit = a;
    longi = b;

    return *this;
}

void MapPoint::SetName(std::string n){
    name = n;
}

void MapPoint::Print() const{
    std :: cout<<"Position of "<<name<<":: Latitude: "<<latit<<", Longitude: "<<longi<<std::endl;
}

MapPoint MapPoint::Clone(){
    MapPoint object = *this;
    object.name = "Cloned " + this -> name;

    return object;
}

MapPoint MapPoint::Clone() const{
     return *this;
}