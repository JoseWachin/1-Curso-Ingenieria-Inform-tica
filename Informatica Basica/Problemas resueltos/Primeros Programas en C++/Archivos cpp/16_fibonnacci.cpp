#include <iostream>
#include <cmath>

    int main() {
        
        int num, suma ;
        int a = 0 ;
        int b = 1 ;

        std::cout << "Introduzca la cantidad de números de fibonnaci que desee: " ;
        std::cin >> num;

    

        for (int i = 1; i <= num; i++) {

            suma = a + b ;

            std::cout << suma << " " ;

            a = b;
            b = suma;

        }

        std::cout << "\n" ;

    return 0;

    }

            
            


        