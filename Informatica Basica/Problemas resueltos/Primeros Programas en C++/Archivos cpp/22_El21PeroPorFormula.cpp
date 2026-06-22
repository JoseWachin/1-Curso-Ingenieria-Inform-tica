#include <iostream>

int main() {
    
    int num;
    std::cout << "Introduzca un Número natural: " ;
    std::cin >> num;

    int suma = (num * (num + 1) / 2 );
    std::cout << "La suma de los primeros " << num << " Números es: " << suma << "\n" ;

    return 0;
}
