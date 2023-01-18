// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal sie,
// a wynik jego dzialania byl taki sam jak podany na końcu tego pliku.
//
// Prosze napisac klasę MapPoint, ktora reprezentuje punkt na
// mapie skladajacy sie z nazwy, dlugosci (longitude) i szerokosci
// (latitude) geograficznej (bez oznaczania polkol). 
// Klasa posiada odpowiedni interfejs, wykorzystany w funkcji main()
//
//
// Pliku Main.cpp, nie wolno modyfikowac.
// Ostateczny program powinien byc przyjazny dla programisty 
// (miec czytelny i dobrze napisany kod, dokumentacja). 
//
// Przy wykonaniu zadania nie wolno korzystac z internetu, notatek, ani zadnych innych materialow 
// (w tym własnych wczesniej przygotowanych plikow).
//
// Kody zrodlowe musza znajdowac sie w katalogu do ktorego nikt oprocz wlasciciela nie ma praw dostepu.


#include "MapPoint.h"

int main() {
  MapPoint::PrintDefaults();
  MapPoint::DefaultLongitude(19.938);
  MapPoint::DefaultLatitude(50.061);
  const double longitude = MapPoint::DefaultLongitude();
  const double latitude = MapPoint::DefaultLatitude();
  MapPoint krk;
  krk.SetName("Krakow");
  krk.SetCoordinates(latitude,longitude).Print();
  const MapPoint krk_clone = krk.Clone();
  krk_clone.Print();
  const MapPoint krk_clone_another = krk_clone.Clone();
  krk_clone_another.Print();
}
/** Wynik dzialania programu:
brachwal@vbox:[build]$ ./Map 
Deafult MP position:: Latitude: 0, Longitude: 0
Position of Krakow:: Latitude: 50.061, Longitude: 19.938
Position of Cloned Krakow:: Latitude: 50.061, Longitude: 19.938
Position of Cloned Krakow:: Latitude: 50.061, Longitude: 19.938
*/
