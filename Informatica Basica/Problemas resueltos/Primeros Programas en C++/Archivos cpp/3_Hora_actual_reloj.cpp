#include <iostream>
    int main() {
        int HoraActual, HoraAdicional, HoraFinal;
        std::cout << "Introduzca la hora actual:";
        std::cin >> HoraActual;

        std::cout << "Introduzca una cantidad de horas entera:" ;
        std::cin >> HoraAdicional;

        HoraFinal = (HoraActual + HoraAdicional) % 24; // El "%24" funciona como "techo" para que solo de numeros entre 0-24 y no más
        
        std::cout << "En " << HoraAdicional << " horas, serán las " << HoraFinal << std::endl;
        return 0;

    }