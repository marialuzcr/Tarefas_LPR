#include <iostream>
#include <iomanip>  
using namespace std;

#define RED     "\033[31m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define GREEN   "\033[32m"
#define RESET   "\033[0m"

void exercicio1() {
    int num;
    cout << RED << "Digite um número: " << RESET;
    cin >> num;

    int quadrado = num * num;
    int soma = 0;

    while (quadrado > 0) {
        soma += quadrado % 10;
        quadrado /= 10;
    }

    cout << YELLOW << "A soma dos dígitos do quadrado é: " << soma << RESET << endl;
}


void exercicio3() {
    int soma = 0;

    for (int i = 50; i <= 500; i++) {
        if (i % 2 != 0 && i % 3 == 0) {
            soma += i;
        }
    }

    cout << GREEN << "A soma dos ímpares múltiplos de 3 entre 50 e 500 é: " << soma << RESET << endl;
}


void exercicio4() {
    int quantidade;
    cout << YELLOW << "Quantos números serão digitados? " << RESET;
    cin >> quantidade;

    int soma = 0, quant = 0;

    for (int i = 1; i <= quantidade; i++) {
        int num;
        cout << "Digite o " << i << "º número: ";
        cin >> num;

        if (num % 2 == 0) {
            soma += num;
            quant++;
        }
    }

    if (quant > 0) {
        double media = static_cast<double>(soma) / quant;
        cout << BLUE << fixed << setprecision(2);
        cout << "A média dos números pares é: " << media << RESET << endl;
    } else {
        cout << BLUE << "Nenhum número par foi digitado." << RESET << endl;
    }
}

int main() {
    int opcao;

    do {
        cout << "\n" << RED;
        cout << "=========================\n";
        cout << "   MENU DE EXERCÍCIOS   \n";
        cout << "=========================\n";
        cout << "1 - Exercicio 1 (Soma dos dígitos do quadrado)\n";
        cout << "2 - Exercicio 3 (Ímpares múltiplos de 3)\n";
        cout << "3 - Exercicio 4 (Média de pares digitados)\n";
        cout << "0 - Sair\n";
        cout << "Escolha uma opção: " << RESET;
        cin >> opcao;

        switch (opcao) {
            case 1:
                exercicio1();
                break;
            case 2:
                exercicio3();
                break;
            case 3:
                exercicio4();
                break;
            case 0:
                cout << GREEN << "Encerrando o programa..." << RESET << endl;
                break;
            default:
                cout << RED << "Opção inválida. Tente novamente." << RESET << endl;
        }

    } while (opcao != 0);

    return 0;
}
