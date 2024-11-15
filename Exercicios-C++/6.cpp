#include <iostream>

int main() {
    for (int i = 1; i <= 5; ++i) {
        for (int j = 1; j <= i - 1; ++j) {
            std::cout << " "; // Imprime espaços para alinhar os asteriscos
        }
        for (int k = i; k <= 5; ++k) {
            std::cout << "* "; // Imprime asteriscos
        }
        std::cout << std::endl; // Muda para a próxima linha após cada linha de asteriscos
    }
    return 0;
}