// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal
// sie, a wynik jego dzialania byl taki sam jak podany na końcu tego pliku.

// Prosze napisac klasy:
// 1) MathObj zawierająca jeden atrybut (nazwe obiektu),
// 2) MathV, ktora reprezentuje wektor n-wymiarowy,
// 3) MathC, która reprezentuję liczbę zespoloną
//    (liczba zespolona ma dwie składowe: real oraz imaginary).
// 4) MathMather, która jest funktorem porównującym ze sobą obiekty MathObj, czy są tego samego typu.
//
// - Klasy MathV oraz MathC dziedziczą z klasy MathObj.
// - Dodatkowo, wszystkie typy mają przeładowany operator '<<' w stosunku do klasy ostream

// Ostateczne rozwiązanie powinno zawierać niezmodyfikowany plik Main.cpp.
// Ostateczny program powinien byc przyjazny dla programisty (miec
// czytelny i dobrze napisany kod).

// Kody zrodlowe musza znajdowac sie w katalogu do ktorego nikt oprocz
// wlasciciela nie ma praw dostepu.

// Rozwiazanie (czyli dodane pliki, makefile (lub CMakeLists.txt) i Main.cpp) 
// nalezy wgrac do UPEL

#include <iostream>
#include "MathV.h"
#include "MathC.h"

int main() {
	MathV v1(3);		
	std::cout<<"v1: "<<v1<<" ("<<static_cast<MathObj>(v1)<<")"<<std::endl;

	MathC c1;
	std::cout<<"c1: "<<c1<<" ("<< static_cast<MathObj>(c1)<<")"<<std::endl;
	
	MathMatcher isVector(v1);
	MathMatcher isComplex(c1);
	std::cout << std::boolalpha;
	std::cout << "v1==v1: "<< isVector(v1) << std::endl;
	std::cout << "v1==c1: "<< isVector(c1) << std::endl;
	std::cout << "c1==c1: "<< isComplex(c1) << std::endl;
	std::cout << "c1==v1: "<< isComplex(v1) << std::endl;
	
	
}

/*
lab14/sln/build$ ./vmath 
v1: [0, 0, 0] (ObjName: Vector)
c1: 0+0i (ObjName: Complex)
v1==v1: true
v1==c1: false
c1==c1: true
c1==v1: false
*/