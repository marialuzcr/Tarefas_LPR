#include <iostream>
#include <iomanip>  
using namespace std;

#define RED     "\033[31m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define GREEN   "\033[32m"
#define RESET   "\033[0m"

void exercicio1() {
     {
        cout << RED << "------------------" << RESET << endl;
        cout << RED << "  aula5-tarefa1   " << RESET << endl;
        cout << RED << "------------------" << RESET << endl;
    
        int quantidade;
        cout << YELLOW << "Quantos números serão digitados? " << RESET;
        cin >> quantidade;
    
        int contador = 0, soma = 0, quant = 0;
    
        while (contador < quantidade) {
            int numero;
            cout << YELLOW << "Digite o " << contador + 1 << "º número: " << RESET;
            cin >> numero;
    
            if (numero % 2 == 0) {
                soma += numero;
                quant++;
            }
    
            contador++;
        }
    
        if (quant > 0) {
            double media = soma * 1.0 / quant;
            cout << BLUE << "A média dos números pares é: " << media << RESET << endl;
        } else {
            cout << BLUE << "Nenhum número par foi digitado." << RESET << endl;
        }
    }
}


void exercicio3() {
    {
        std::setlocale(LC_ALL, "pt_BR.UTF-8"); 
        cout << RED << "------------------" << RESET << endl;
        cout << RED << "  aula5-tarefa3   " << RESET << endl;
        cout << RED << "------------------" << RESET << endl;
        int soma = 0; 
        cout << "digite um numero  " << soma << endl;
        cout << "\033[1;32m" << "Texto em verde" << "\033[0m" << endl; 
    
        for (int i = 50; i <= 500; i++) {
           
            if (i % 2 != 0 && i % 3 == 0) {
                soma += i;
            }
        }
    
        
        cout << "A soma dos números ímpares múltiplos de 3 entre 50 e 500 é: " << soma << endl;
    }
}


void exercicio4() {
    {
   
        int num;
        cout << RED << "------------------" << RESET << endl;
        cout << RED << "  aula5-tarefa4  " << RESET << endl;
        cout << RED << "------------------" << RESET << endl;
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
