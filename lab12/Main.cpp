// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal
// sie, a wynik jego dzialania byl taki sam jak podany na końcu tego pliku.

// Prosze napisac klase: MathV, ktora reprezentuje wektor n-wymiarowy.
// Typ MathV powinien posiadać wszystkie metody zgodnie z main(), w tym:
// - dot: iloczyn skalarny dwóch wektorów (v * w = v1*w1 + v2*w2 + ... + vn*wn)
// - norm: normę wektora (|v| = sqrt( v1*v1 + v2*v2 + ... + vn*vn ) )
// - operator konwersji na double (zwraca normę)
// - add dodająca do wektora inny wektor lub liczbę
// - operator preinkrementacji "++" zwracający wektor zwiększony o 1 (v.add(1))
// Dodatkowo dla typu MathV zdefiniowany jest przeładowany operator '<<' w stosunku do klasy ostream
// Proszę zwrócić uwagę na to, że zdefiniowanie (odkomentowanie w Main.cpp) zmiennej
// preprocesora COMPILATION_ERROR musi skutkować błędem kompilacji - w przeciwnym wypadku -1 punkt za output.

// Ostateczne rozwiązanie powinno zawierać niezmodyfikowany plik Main.cpp.
// Ostateczny program powinien byc przyjazny dla programisty (miec
// czytelny i dobrze napisany kod).

// Kody zrodlowe musza znajdowac sie w katalogu do ktorego nikt oprocz
// wlasciciela nie ma praw dostepu.

// Rozwiazanie (czyli dodane pliki, makefile (lub CMakeLists.txt) i Main.cpp) 
// nalezy wgrac do UPEL

#include <iostream>
#include "MathV.h"

// #define COMPILATION_ERROR

int main() {
	MathV v1(3);		
	const MathV v2(2);	

	v1.at(0) = 1;
	v1.at(1) = 2;
	const MathV v3 = v1;
	v1.at(1) = 0;
	v3.at(2) = 4;
	std::cout<< "v1: " << v1 <<std::endl;
	std::cout<< "v2: " << v2 <<std::endl;
	std::cout<< "v3: " << v3 <<std::endl;
/*
	double prod = MathV::dot(v1, v3); 
	std::cout << "Dot product = " << prod << std::endl;
	std::cout << "Another dot product: " << std::endl;
	MathV::dot(v1,v2);

	double norm = static_cast<double>(v3); // == v3.norm();
	std::cout << "Norm = " << norm << ", " << v3.norm() << std::endl;

	std::cout << "v1:   " << v1 << std::endl;
	std::cout << "v1+1: " << v1.add(1) << std::endl;
	std::cout << "++v1: " << ++v1 << std::endl;

	#ifdef COMPILATION_ERROR
	MathV strange = 5;
	#endif
	*/
}

/*
lab12/sln/build$ ./vmath 
v1: [1, 0, 0]
v2: [0, 0]
v3: [1, 2, 4]
Dot product = 1
Another dot product: 
[Error] MathV:: vectors of different dimensions! (returning -100)
Norm = 4.58258, 4.58258
v1:   [1, 0, 0]
v1+1: [2, 1, 1]
++v1: [3, 2, 2
*/