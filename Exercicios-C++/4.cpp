#include <iostream>

using namespace std;

int main() {
	cout<<"\n\t Piramide\n\n";
	
    for (int i = 1; i <= 5; ++i) { // Controlam as linhas
        for (int j = 1; j <= i - 1; ++j) {
            cout << "  "; // Imprime espaços para alinhar os asteriscos
        }
        for (int k = i; k <= 5; ++k) {
            cout << "* "; // Imprime asteriscos
        }
        cout << "\n"; // Muda para a próxima linha após cada linha de asteriscos
    }
    return 0;
}
