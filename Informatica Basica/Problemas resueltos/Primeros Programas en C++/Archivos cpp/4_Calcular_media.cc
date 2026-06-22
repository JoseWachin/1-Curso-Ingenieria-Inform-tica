#include <iostream>
    int main() {
        double PrimerDigito, SegundoDigito, TercerDigito, CuartoDigito, Media;
        std::cout << "Introduzca el primer dígito:";
        std::cin >> PrimerDigito;
        std::cout << "Introduzca el segundo dígito:";
        std::cin >> SegundoDigito;
        std::cout << "Introduzca el tercer dígito:";
        std::cin >> TercerDigito;
        std::cout << "Introduzca el cuarto dígito:";
        std::cin >> CuartoDigito;

        Media  = (PrimerDigito + SegundoDigito + TercerDigito + CuartoDigito) / 4;
        
        std::cout << "La media entre esos cuatro dígitos es: " << Media << std::endl;
        return 0;
    }