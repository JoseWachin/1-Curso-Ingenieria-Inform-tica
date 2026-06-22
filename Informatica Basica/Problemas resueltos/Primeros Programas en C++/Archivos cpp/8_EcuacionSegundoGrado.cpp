#include <iostream>
#include <cmath>

int main () {
    double a, b, c, x, funcion;

    std::cout << "Introduzca el valor de a: " ;
    std::cin >> a;
    std::cout << "Introduzca el valor de b: " ;
    std::cin >> b;
    std::cout << "Introduzca el valor de c: " ;
    std::cin >> c;
    std::cout << "Introduzca el valor de x: " ;
    std::cin >> x;

    funcion = (a*pow(x, 2) + b*x + c );

    std::cout << "f(" << x << ") = " << funcion << std::endl;
    return 0;

}