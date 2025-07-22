#include <iostream>
#define Verde   "\033[32m"
#define Amarelo "\033[33m"
#define Reset   "\033[0m"

using namespace std;

int reverNu(int num) {
    int reverso = 0;
    bool negativo = false;

    if (num< 0) {
        negativo = true;
        num = -num; 
    }

    while (num > 0) {
        int digito = num % 10;
        reverso = reverso * 10 + digito;
        num /= 10;
    }

    
    return negativo ? -reverso : reverso;
}

int main() {

    cout << Verde << "-------------------" << Reset << endl;
    cout << Verde << "   Exercício 1     " << Reset << endl;
    cout << Verde << "-------------------" << Reset << endl;
    int numero;
    cout << "Digite um número inteiro: ";
    cin >> numero;

    int resultado = reverNu(numero);
    cout << Amarelo << "Número reverso: " << Reset << resultado << endl;
    return 0;
}
