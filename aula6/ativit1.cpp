#include <iostream>
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
    int numero;
    cout << "Digite um número inteiro: ";
    cin >> numero;

    int resultado = reverNu(numero);
    cout << "Reverso: " << resultado << endl;

    return 0;
}
