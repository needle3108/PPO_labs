// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal
// sie, a wynik jego dzialania byl taki sam jak podany na końcu tego pliku.

// Prosze napisac klasę: MathV, ktora reprezentuje wektor n-wymiarowy.
// Typ MathV powinien posiadać wszystkie metody zgodnie z main(), w tym:
// - operator *: iloczyn skalarny dwóch wektorów (v * w = v1*w1 + v2*w2 + ... + vn*wn)
// - operator pre/post inkrementacji "++" zwracający wektor zwiększony o 1
// Dodatkowo dla typu MathV zdefiniowany jest przeładowany operator '<<' w stosunku do klasy ostream
// Proszę napisać klasę: MathVMatcher która będzie funktorem porównującym ze sobą obiekty MathV

// Ostateczne rozwiązanie powinno zawierać niezmodyfikowany plik Main.cpp.
// Ostateczny program powinien byc przyjazny dla programisty (miec
// czytelny i dobrze napisany kod).

// Kody zrodlowe musza znajdowac sie w katalogu do ktorego nikt oprocz
// wlasciciela nie ma praw dostepu.

// Rozwiazanie (czyli dodane pliki, makefile (lub CMakeLists.txt) i Main.cpp) 
// nalezy wgrac do UPEL

#include <iostream>
#include "MathV.h"

int main() {
	MathV v1(3);		
	MathV v2(2);	

	v1.at(0) = 1;
	v1.at(1) = 2;
	const MathV v3 = v1;
	v1.at(1) = 0;
	v3.at(2) = 4;
	std::cout<<"v1: "<<v1<<", v2: "<<v2<<", v3: "<<v3<<std::endl;

	std::cout << "Dot product = " << v1*v3 << std::endl;
	std::cout << "Another dot product: " << std::endl;
	v1*v2;
	
	std::cout << "++v1: "<< ++v1 << std::endl;
	std::cout << "v1++: "<<v1++<<", v1: "<<v1<< std::endl;

	MathVMatcher isV1(v1);
	std::cout << std::boolalpha;
	std::cout << "v1==v1: "<< isV1(v1) << std::endl;
	std::cout << "v1==v2: "<< isV1(v2) << std::endl;
	std::cout << "v1==v3: "<< isV1(v3) << std::endl;
	
}

/*
lab12/sln/build$ ./vmath 
v1: [1, 0, 0], v2: [0, 0], v3: [1, 2, 4]
Dot product = 1
Another dot product: 
[Error] MathV:: vectors of different dimensions! (returning -100)
++v1: [2, 1, 1]
v1++: [2, 1, 1], v1: [3, 2, 2]
v1==v1: true
v1==v2: false
v1==v3: false
*/