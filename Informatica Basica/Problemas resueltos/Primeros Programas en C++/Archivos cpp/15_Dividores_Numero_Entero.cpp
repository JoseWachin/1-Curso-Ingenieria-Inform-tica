#include <iostream>
#include <cmath>

int main() {
    
    int num;

    std::cout << "Introduzca un número entero: " ;
    std::cin >> num; 

    if (num <= 0) {
        std::cout << "Introduzca un numero mayor que 0";
    }
    for (int i = 1; i <= num; i++) {
        
        if (num % i == 0) {
        std::cout << i << " ";
    }
}



    std::cout << "\n" ;
}