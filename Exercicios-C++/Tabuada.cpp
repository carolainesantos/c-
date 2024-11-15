#include <iostream>

int main() {
	system("chcp 65001");
    int num;
    std::cout << "\n\nDigite um número para calcular a tabuada: ";
    std::cin >> num;

    std::cout << "\nA tabuada do número " << num << " é:\n";
    
    std::cout << num << " x 0 = " << num * 0 << "\n";
    std::cout << num << " x 1 = " << num * 1 << "\n";
    std::cout << num << " x 2 = " << num * 2 << "\n";
    std::cout << num << " x 3 = " << num * 3 << "\n";
    std::cout << num << " x 4 = " << num * 4 << "\n";
    std::cout << num << " x 5 = " << num * 5 << "\n";
    std::cout << num << " x 6 = " << num * 6 << "\n";
    std::cout << num << " x 7 = " << num * 7 << "\n";
    std::cout << num << " x 8 = " << num * 8 << "\n";
    std::cout << num << " x 9 = " << num * 9 << "\n";
    std::cout << num << " x 10 = " << num * 10 << "\n";

    return 0;
}
