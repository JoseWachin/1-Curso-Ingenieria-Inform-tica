#include <iostream>

int main() {

    int años, dias, horas, minutos, segundos ;
    std::cout << "Introduzca una cantidad de años, dias, horas, minutos y segudos, en ese orden: " ;
    std::cin >> años >> dias >> horas >> minutos >> segundos ;

    años = (años * 31536000);
    dias = (dias * 86400);
    horas = (horas * 3600);
    minutos = (minutos * 60);

    int Suma = ( años + dias + horas + minutos + segundos );

    std::cout << Suma << std::endl;

    return  0;

}