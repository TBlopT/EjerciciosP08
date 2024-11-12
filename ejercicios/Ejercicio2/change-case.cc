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
#include <string>
#include <cctype>

// Función que cambia las mayúsculas a minúsculas y viceversa
std::string changeCase(const std::string& input) {
    std::string output;
    for (char ch : input) {
        if (std::isupper(ch))
            output += std::tolower(ch);
        else if (std::islower(ch))
            output += std::toupper(ch);
        else
            output += ch;
    }
    return output;
}

int main() {
    std::string input;
    std::cout << "Ingrese una cadena de caracteres: ";
    std::cin >> input;

    std::string output = changeCase(input);
    std::cout << "Resultado: " << output << std::endl;

    return 0;
}

