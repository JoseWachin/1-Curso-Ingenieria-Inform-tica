#include <iostream>

int main() {
    
    int num;
    int suma{0};

    std::cout << "Introduzca un Número natural: " ;
    std::cin >> num;

    for(int i = 1; i <= num; i++) {
        suma += i ;
    }

    std::cout << "La suma de los primeros " << num << " Números es: " << suma << "\n" ;

    return 0;

}