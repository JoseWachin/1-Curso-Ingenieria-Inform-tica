#include <iostream>
int main() {
    int año_nacimiento, año_actual, edad;
    std::cout << "Ingrese su año de nacimiento: ";
    std::cin >> año_nacimiento;
    std::cout << "Ingrese el año actual: ";
    std::cin >> año_actual;
    edad = año_actual - año_nacimiento;
    std::cout << "Usted tiene " << edad << " años." << std::endl;
    return 0;   
}
