#include <iostream>
#include <cmath>

int main() {

    int num;

    std::cout << "introduzca un número entero de 3 dígitos: " ;
    std::cin >> num;

    int resto;

    if (num <= 999 && num > 99) {

    for (int i = 1; i < 3; i++) {

        resto = (num % 10) ;
        num = (num / 10) ;

        std::cout << resto << "" ;


    }
    std::cout << num << "\n";
    }

    else {
        std::cout << "El número debe contener como mucho 3 dígitos" << std::endl;
    }
    
    return 0;

}