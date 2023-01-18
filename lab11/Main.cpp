// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal
// sie, a wynik jego dzialania byl taki sam jak podany na końcu tego pliku.

// Prosze napisac klasy: Grade, ktora reprezentuje ocene studenta, 
// i GradeBook, ktora reprezentuje dziennik ocen. Kazda ocena ma
// przypisaną nazwę studenta i unikatowy numer ID, inicjalizowany 
// w momencie tworzenia danej oceny (jeden wspólny licznik)

// Prosze zwrocic uwage na dobre zarzadzanie pamiecia, zwlaszcza na
// zwolnienie pamieci na koniec programu.
// - Klasa GradeBook przechowuje oceny Grade, poprzez agregowanie 
// surowych wskaźników, const Grade*

// Definicję klasy Grade można wykorzystać z poprzednich zajeć,
// Definicję klasy GradeBook proponuję zaimplementować from scratch.

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
#include "GradeBook.h"

int main() {

  const Grade arek("Arkadiusz",3.0);
  //arek.SetStudent("Arek"); // error: passing ‘const Grade’ as ‘this’ argument discards qualifiers
  arek.Print("[info]:: ");
  std::cout<<"[info]:: grade value "<< arek.Value(4.0) << std::endl;
  
  GradeBook grades; // przechowuje oceny jako liste/tablice/vector: const Grade*
                    // jeśli ocena przekazana jest przez referencje, tworzona jest kopia tej oceny
  grades.Insert(arek);
  grades.GetPtrConst(0)->Value(5.0); // OK, z tego samego powodu co arek.Value(4.0)
  //grades.GetPtrConst(0)->SetStudent("Arkadiusz"); // error: passing ‘const Grade’ as ‘this’ argument discards qualifiers
  grades.Print("[info]:: GradeBook:: ");
  std::cout<<"\n";
  grades.Insert(new Grade("An", 3.0));
  grades.GetPtr(1)->SetStudent("Anna"); // OK, zwrócony ptr jest na typ Grade*, a wskazywany obiekt nie jest const

  grades.Insert(new const Grade("Jowita", 3.5));
  grades.Print("[info]:: GradeBook:: ");
  //grades.GetPtr(2)->SetStudent("Joanna"); // To może powodować Undefined Behavior, wskazywany obiekt jest const !!!

  return 0;
}
/** Wynik dzialania programu:
/ppo/lab11/sln/build$ ./StudentGrades 
[info]:: Student (Arkadiusz) grade (ID=1) = 3
[info]:: grade value 4
[info]:: GradeBook:: Student (Arkadiusz COPY) grade (ID=1) = 5

[info]:: GradeBook:: Student (Arkadiusz COPY) grade (ID=1) = 5
[info]:: GradeBook:: Student (Anna) grade (ID=2) = 3
[info]:: GradeBook:: Student (Jowita) grade (ID=3) = 3.
*/
