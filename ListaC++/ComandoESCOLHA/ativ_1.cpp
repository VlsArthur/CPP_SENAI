#include <iostream>
using namespace std;

/*
1. Crie um programa que apresente um menu com três opções (1, 2 e 3) e, de acordo
com a opção escolhida pelo usuário, exiba uma mensagem diferente para o horário do
dia.
*/

int main() {
    int opcao;
    cout << "Quando você está acessando o sistema? \n";
    cout << "1) Manhã \n"; 
    cout << "2) Tarde \n";
    cout << "3) Noite \n";
    cout << "R: ";
    cin >> opcao;
    switch (opcao) {
        case 1:
            cout << "\nBom dia!";
            break;
        case 2:
            cout << "\nBoa tarde!";
            break;
        case 3:
            cout << "\nBoa noite!";
            break;
        default:
            cout << "\nOpção inválida.";
            break;
    }

    return 0;
}