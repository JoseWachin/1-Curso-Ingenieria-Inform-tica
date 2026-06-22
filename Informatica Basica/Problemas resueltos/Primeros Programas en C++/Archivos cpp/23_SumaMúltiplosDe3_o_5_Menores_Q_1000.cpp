#include <iostream>

int main() {

    long num{1000};
    long suma{0};
    
    for (long i{0}; i < num; i++) {
    if ((i % 3 == 0) || (i % 5 == 0)) {
        
        suma += i;
        
    }
    
        }
        std::cout << suma << "\n";
        
        return 0;

    }
