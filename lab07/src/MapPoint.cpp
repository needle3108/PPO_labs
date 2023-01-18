#include "MapPoint.h"

void MapPoint::SetName(const char* n){
    this -> city = n;
}

void MapPoint::SetCoordinates(double latit, double longi){
    this -> longitude = longi;
    this -> latitude = latit;
}

void MapPoint::Print(){
    std :: cout<<"Position of "<<city<<":: Latitude: "<<latitude<<", Longitude: "<<longitude<<std::endl;
}

void MapPoint::SetInfo(const char* n, MapPoint city){
    this -> city = n;
    this -> longitude = city.longitude;
    this -> latitude = city.latitude;
}

MapPoint MapPoint::Shift(double xx, double yy){
    this -> latitude += xx;
    this -> longitude += yy;

    return *this;
}

double MapPoint::Distance(MapPoint city1){
    double diff_x = city1.longitude - this -> longitude;
    double diff_y = city1.latitude - this -> latitude;
    return sqrt(pow(diff_x,2)+pow(diff_y,2));
}

void MapPoint::SetInfo(const char* n, double latit, double longi){
    this -> city = n;
    this -> latitude = latit;
    this -> longitude = longi;
}

MapPoint MapPoint::Farthest(MapPoint city1, MapPoint city2){
    double r1 = MapPoint::Distance(city1);
    double r2 = MapPoint::Distance(city2);

    if(r1 > r2){
        return city1;
    }

    else return city2;
}