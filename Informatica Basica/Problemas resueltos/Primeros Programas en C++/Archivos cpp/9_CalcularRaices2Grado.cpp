#include <iostream>
#include <cmath>

int main() {
    double a, b, c, x1, x2;

    std::cout << "Introduzca el valor de a: " ;
    std::cin >> a;
    std::cout << "Introduzca el valor de b: " ;
    std::cin >> b;
    std::cout << "Introduzca el valor de c: " ;
    std::cin >> c;
    
    x1 = (-b + sqrt(pow(b, 2) -4*a*c) ) / (2*a) ;
    x2 = (-b - sqrt(pow(b, 2) -4*a*c) ) / (2*a) ;

    if (4*a*c > pow(b , 2)) {
        std::cout << "No existen soluciones reales para este polinomio\n" ; 
    }
        else {
            std::cout << "x1 = " << x1 << " x2 = " << x2 << std::endl;
        }
    
    return 0;
}