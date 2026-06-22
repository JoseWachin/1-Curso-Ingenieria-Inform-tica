#include <iostream>
int main() {
    double centimetros, pulgadas;
    std::cout << "Introduzca una longitud en centimetros:";
    std::cin >> centimetros;
        pulgadas = (centimetros / 2.54 );
    std::cout << "Su longitud en pulgadas es: " << pulgadas << " in" << std::endl;
    return 0;
}