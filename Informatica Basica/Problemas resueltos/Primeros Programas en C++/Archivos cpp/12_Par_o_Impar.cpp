#include <iostream>

int main() {

    int num ;
    std::cout << "Introduzca un número entero: ";
    std::cin >> num;

    int Funcion = ( num % 2 ) ;

    if (Funcion == 0) {
        std::cout << "El numero es par\n";
    }
    else if (Funcion  == 1) {
        std::cout << "El número es impar\n" ;
    }

    return 0;
    }
    

