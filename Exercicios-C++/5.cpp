#include <iostream>

int main() {
    for (int i = 1; i <= 5; ++i) {
        // Imprime espaços para alinhar os asteriscos
        for (int j = 1; j <= 5 - i; ++j) {
            std::cout << " ";
        }
        // Imprime asteriscos
        for (int k = 1; k <= i; ++k) {
            std::cout << "* ";
        }
        std::cout << std::endl; // Muda para a próxima linha após cada linha de asteriscos
    }
    return 0;
}
