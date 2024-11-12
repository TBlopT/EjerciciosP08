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
#include <cstdlib>
#include <ctime>

// Función que genera un número aleatorio en el intervalo [n, m]
double generateRandomNumber(int n, int m) {
    return n + (std::rand() / (RAND_MAX + 1.0)) * (m - n);
}

int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cerr << "Uso: " << argv[0] << " <n> <m>\n";
        return 1;
    }

    int n = std::atoi(argv[1]);
    int m = std::atoi(argv[2]);

    if (n >= m) {
        std::cerr << "El primer número debe ser menor que el segundo." << std::endl;
        return 1;
    }

    std::srand(static_cast<unsigned int>(std::time(0)));
    double random = generateRandomNumber(n, m);
    std::cout << "Número aleatorio: " << random << std::endl;

    return 0;
}

