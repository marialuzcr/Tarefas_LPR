#include <iostream>
#include <locale>
using namespace std;

int main() {
    std::setlocale(LC_ALL, "pt_BR.UTF-8"); 
    int soma = 0; 
    cout << "digite um numero  " << soma << endl;
    cout << "\033[1;32m" << "Texto em verde" << "\033[0m" << endl; 

    for (int i = 50; i <= 500; i++) {
       
        if (i % 2 != 0 && i % 3 == 0) {
            soma += i;
        }
    }

    
    cout << "A soma dos números ímpares múltiplos de 3 entre 50 e 500 é: " << soma << endl;

    return 0;
}