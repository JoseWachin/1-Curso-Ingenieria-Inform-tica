#include <iostream>

int main() {

    long long segundos, minutos, horas, dias, años, resto;
    std::cout << "Introduzca una cantidad entera de segundos: " ;
    std::cin >> segundos;

    años = (segundos / 31536000);
    resto = (segundos % 31536000); // cuantos segundos sobraron

    dias = (resto / 86400) ;
    resto = (resto % 86400);

    horas = (resto / 3600) ;
    resto = (resto % 3600);

    minutos = (resto / 60) ;
    resto = (resto % 60);

    segundos = resto ;

    std::cout << años << " " << dias%365 << " " << horas%24 << " " << minutos%60 << " " << segundos%60 << std::endl;

    return 0;
}
