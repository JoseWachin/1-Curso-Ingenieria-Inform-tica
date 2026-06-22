#include <iostream>
#include <cmath>

int main() {
    
    int exponencial;
    std::cout << "Introduzca un exponente entero: " ;
    std::cin >> exponencial;

    for (int i = 1; i <= exponencial; i++) {
        std::cout << pow(2, i) << " " ;
    }
    std::cout << "\n";
}