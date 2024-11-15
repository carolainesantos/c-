#include <iostream>

int main() {
    int columns = 2; // Número de colunas desejado

    // Loop para imprimir a parte superior do padrão do meio diamante
    for (int i = 1; i <= columns; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }

    // Loop para imprimir a parte inferior do padrão do meio diamante
    for (int i = columns + 1; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }

    return 0;
}
