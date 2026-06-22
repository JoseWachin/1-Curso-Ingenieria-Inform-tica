#include <iostream>
#include <cmath>

int main() {
    double a, b, c ;

    std::cout << "Introduzca el valor de a: " ;
    std::cin >> a;
    std::cout << "Introduzca el valor de b: " ;
    std::cin >> b;
    std::cout << "Introduzca el valor de c: " ;
    std::cin >> c;

    double s = ((a + b + c) / 2) ;
    double argumento = s * (s - a) * (s - b) * (s - c) ;
    if (argumento < 0) {
        std::cout << "No es un triangulo valido" << std::endl;
    }
        else {
            double Area = sqrt(argumento);
             std::cout << "El area del triangulo es: " << Area << std::endl;

        }


    return 0;
}