#include <iostream>
using namespace std;
#define RED     "\033[31m"
#define RESET   "\033[0m"
#define YELLOW  "\033[33m"

int main() {
   
    int num;
    cout << RED <<"Digite um numero: "<<RESET << endl;
    cin >> num;

    
    int quadrado = num*num;
    int soma = 0;

    while (quadrado > 0) {
        
        int digito = quadrado % 10;

        soma += digito;

        quadrado /= 10;
    }
    
    cout <<  YELLOW << "A soma dos digitos do quadrado eh: " << soma << RESET << endl;

    return 0;
}