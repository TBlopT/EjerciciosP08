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

// Función para verificar si los lados forman un triángulo válido
bool isValidTriangle(double a, double b, double c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

// Función para calcular el área del triángulo usando la Fórmula de Herón
double calculateTriangleArea(double a, double b, double c) {
    double s = (a + b + c) / 2.0;
    return std::sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    double a, b, c;
    std::cout << "Ingrese los tres lados del triángulo: ";
    std::cin >> a >> b >> c;

    if (!isValidTriangle(a, b, c)) {
        std::cerr << "No es un triángulo válido." << std::endl;
        return 1;
    }

    double area = calculateTriangleArea(a, b, c);
    std::cout << "Área del triángulo: " << area << std::endl;

    return 0;
}

