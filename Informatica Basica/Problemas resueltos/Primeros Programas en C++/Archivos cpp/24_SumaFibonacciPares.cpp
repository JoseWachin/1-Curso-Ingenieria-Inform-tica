#include <iostream>

int main() {


    long long SumaTotal{0};
    long long a{0}, b{1};

    for(long long termino{1}; termino < 1000; termino = a + b) {
        if (termino % 2 == 0) {
            SumaTotal += termino;
        }

        a = b;
        b = termino;
    }

    std::cout << SumaTotal << std::endl;

    return 0;
}




