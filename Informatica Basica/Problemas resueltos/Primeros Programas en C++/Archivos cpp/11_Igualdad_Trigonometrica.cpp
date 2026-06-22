#include <iostream>
#include <cmath>

    int main() {

        double x ;
        std::cout << "Introduzca un valor real de x: " ;
        std::cin >> x;

        double Funcion = ( pow(sin(x), 2) + pow(cos(x), 2) );
        
        std::cout << Funcion << std::endl;
        return 0;



    }