#include <iostream>
#include <numbers>
#include <cmath>

        int main() {
            
            using namespace std::numbers;

            double radio, area, perimetro; 

            std::cout << "Introduzca el radio del circulo: ";
            std::cin >> radio;

            perimetro = (pi * 2 * radio);
            area = (pi * pow(radio , 2));

            std::cout << "El perímetro del circulo es " << perimetro << "\n";
            std::cout << "El área del circulo es " << area << std::endl;

            return 0;
    
            
        }