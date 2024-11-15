#include <iostream>
using namespace std;

int main() {
    int columns = 5; // Número de colunas desejado

    // Loop para imprimir a parte superior do padrão do meio diamante
    for (int i = 1; i <= columns; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << '\n'; // Quebra de linha usando o caractere '\n'
    }

    // Loop para imprimir a parte inferior do padrão do meio diamante
    for (int i = columns - 1; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << "\n"; // Quebra de linha usando o caractere '\n'
    }

    return 0;
}
