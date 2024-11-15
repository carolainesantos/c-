
#include <iostream>

using namespace std;

int main() {
	cout<<"\n\t Piramide \n\n";
    for (int i = 1; i <= 5; ++i) { // Linha 
        for (int j = 1; j <= 5; ++j) { // Coluna
            if (j <= 5 - i) {
                cout << "  "; // Imprime espaços para alinhar os asteriscos
            } else {
                cout << "* "; // Imprime asteriscos
            }
        }
        cout << '\n'; // Muda para a próxima linha após cada linha de asteriscos
    }
    return 0;
}


