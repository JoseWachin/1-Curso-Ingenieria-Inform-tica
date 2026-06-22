#include <iostream>

int main() {
    
    int num;
    std::cout << "introduzca un número entero: ";
    std::cin >> num;
    std::cout << num << " ";
    
    while (num > 1) {
        if(num % 2 == 0) {
        num /= 2;
        std::cout << num << " ";
        }
        else {
            num = num * 3 + 1;
            std::cout << num << " ";
        }
    }
    std::cout << " " << "\n";
    return 0;
    }
    
