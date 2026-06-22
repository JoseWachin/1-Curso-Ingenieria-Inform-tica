#include <iostream>
#include <cmath>

int main() {
    long long NumEntero, CantidaNum;
    std::cout << "Introduzca un número entero: ";
    std::cin >> NumEntero;

    // EL if es porque log=0 es -infinito, entonces si el usuario pone un 0, escribira que tiene un dijito
    if (NumEntero == 0) {
        std::cout << "El número tiene 1 dígito";
    }

    else {
    
        CantidaNum = std::floor(std::log10(abs(NumEntero)) + 1); //abs para valor absulo y no falle si el usuario pone un numero negativo
        std::cout << "El número tiene " << CantidaNum << " digitos" << std::endl;
    }

    return 0;


}