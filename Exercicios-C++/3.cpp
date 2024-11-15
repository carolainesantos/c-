#include <iostream>

using namespace std;

int main() {
	system("chcp 65001");
	cout<<"\n\t Piramide \n\n";
	
    for (int i = 5; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << "\n"; // Muda para a próxima linha após cada linha de asteriscos
    }
    return 0;
}










//#include <iostream>
//
//int main() {
//    for (int i = 5; i >= 1; --i) {
//        for (int j = 1; j <= i; ++j) {
//            std::cout << "* ";
//        }
//        std::cout << std::endl;
//    }
//    return 0;
//}
