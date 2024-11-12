/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @author  Pablo Romero Armas alu0101743844@ull.edu.es
 * @date nov 11 2024
 * @brief 
 *
 *
 *
 * @bug There are no known bugs
 * @see https://www.cs.cmu.edu/~410/doc/doxygen.html
 */
#include <iostream>
#include <cmath>

// Función para comparar números de punto flotante con margen de error epsilon
bool areEqual(double number1, double number2, double epsilon = 1e-7) {
    return std::fabs(number1 - number2) < epsilon;
}

int main() {
    double num1, num2;
    std::cout << "Ingrese dos números para comparar: ";
    std::cin >> num1 >> num2;

    bool result = areEqual(num1, num2);
    std::cout << "¿Son aproximadamente iguales? " << (result ? "Sí" : "No") << std::endl;

    return 0;
}

