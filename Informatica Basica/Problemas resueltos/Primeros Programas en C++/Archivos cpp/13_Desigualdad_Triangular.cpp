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

    if (a + b > c && a + c > b && b + c > a) { // Condicion para que sea un triangulo valido, la suma de 2 de sus lados simepre debe ser mayor que el tercer lado
        if (a == b  &&  b == c) {
            std::cout << "Es un trinagulo equilatero\n" ;
        }
        else if (a == b || a == c || b == c) {
            std::cout << "Es un triangulo isoceles\n" ;
        }
        else if (a != b != c) {
            std::cout << "Es un triangulo escaleno\n" ;
        }
        
        }
        else {
            std::cout << "No es un triangulo valido" << std::endl;
        }
        return 0;
    }
