// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal
// sie, a wynik jego dzialania byl taki sam jak podany na końcu tego pliku.

// Prosze napisac klasy: Grade, ktora reprezentuje ocene studenta, 
// i GradeBook, ktora reprezentuje dziennik ocen. Kazda ocena ma
// przypisaną nazwę studenta i unikatowy numer ID, inicjalizowany 
// w momencie tworzenia danej oceny (jeden wspólny licznik)

// Prosze zwrocic uwage na dobre zarzadzanie pamiecia, zwlaszcza na
// zwolnienie pamieci na koniec programu.

// UWAGA!!!
// Nie wolno uzywac jawnego rzutowania. Uzycie jawnego rzutownia
// bedzie traktowane jak blad kompilacji, czyli 0 punktow.

// UWAGA!!!
// W tym zadaniu nie wolno uzywac mutable. Uzycie tego slowa
// kluczowego oznacza 0 punktow za zadanie.

// UWAGA!!!
// Uzycie const_cast z obiektem const powoduje niezdefiniowane
// dzialanie programu, dlatego w takiej sytuacji nie wolno uzyc const_cast.

// Pliku Main.cpp, nie wolno modyfikowac.

// Ostateczny program powinien byc przyjazny dla programisty (miec
// czytelny i dobrze napisany kod). 

// Przy wykonaniu zadania nie wolno korzystac z internetu, notatek,
// ani zadnych innych materialow (w tym wlasnych wczesniej
// przygotowanych plikow oprocz makefile)

// Kody zrodlowe musza znajdowac sie w katalogu do ktorego nikt oprocz
// wlasciciela nie ma praw dostepu.

// Rozwiazanie (czyli dodane pliki, makefile (lub CMakeLists.txt) i Main.cpp) 
// nalezy wgrac do UPEL

#include <iostream>
#include "Grade.h"
#include "GradeBook.h"

int main() {
  
  Grade* firstGrade = new Grade ("Janek",4.5);
  firstGrade->Print();
  std::cout<< "---" << std::endl;
  GradeBook goodStudents;
  goodStudents.Insert(firstGrade);
  goodStudents.Print();
  std::cout<< "---" << std::endl;
  goodStudents.Insert(new Grade("Anna",4));
  goodStudents.AddGrade("Herbert", 3.5);
  goodStudents.Print();
  std::cout<< "---" << std::endl;
  const Grade* secondGrade = Grade::GetPtrConstGrade("Antoni",5); // new const Grade ("Antoni", 5);
  goodStudents.Insert(secondGrade);
  goodStudents.Print();

  return 0;
}
/** Wynik dzialania programu:
Student (Janek) grade (ID=1) = 4.5
---
Grades in the book:
Student (Janek) grade (ID=1) = 4.5
---
Grades in the book:
Student (Janek) grade (ID=1) = 4.5
Student (Anna) grade (ID=2) = 4
Student (Herbert) grade (ID=3) = 3.5
---
Grades in the book:
Student (Janek) grade (ID=1) = 4.5
Student (Anna) grade (ID=2) = 4
Student (Herbert) grade (ID=3) = 3.5
Student (Antoni) grade (ID=4) = 
*/
