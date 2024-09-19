#include <iostream>
using namespace std;

/*
8. Escreva um programa que permita ao usuário escolher entre duas opções de idiomas
(português ou inglês) e exiba uma mensagem de boas-vindas de acordo com a escolha.
*/

int main() {
    int opcao;
    cout << "Selecione o idioma / Choose the language \n";
    cout << "1) Português \n"; 
    cout << "2) English \n";
    cout << "R: ";
    cin >> opcao;
    switch (opcao) {
        case 1:
            cout << "\nBem-vindo!";
            break;
        case 2:
            cout << "\nWelcome!";
            break;
        default:
            cout << "\nOpção inválida. / Invalid Option.";
            break;
    }

    return 0;
}