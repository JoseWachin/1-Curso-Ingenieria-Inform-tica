#include <iostream>
#include <cmath>

int main() {

    double Catetoa, Catetob, Hipotenusa;

    std::cout << "Introduzca el cateto a: ";
    std::cin >> Catetoa;
    std::cout << "Introduzca el cateto b: " ;
    std::cin >> Catetob;

    Hipotenusa = hypot(Catetoa, Catetob); // La libreria "cmath" trae consigo "hypot(x)" para el teorema de pitagoras 

    std::cout << "El valor de la hipotenusa es: " << Hipotenusa << std::endl;

    return 0;
}