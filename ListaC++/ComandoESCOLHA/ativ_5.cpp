#include <iostream>
using namespace std;

/*
5. Faça um programa que permita ao usuário escolher entre três opções de velocidade
(baixa, média e alta) e exiba uma mensagem informando o limite de velocidade
permitido em uma determinada via.
*/

int main() {
    int opcao;
    cout << "Selecione a velocidade \n";
    cout << "1) Baixa\n"; 
    cout << "2) Média\n";
    cout << "3) Alta\n";
    cout << "R: ";
    cin >> opcao;
    switch (opcao) {
        case 1:
            cout << "Velocidade permitida: 40km/h";
            break;
        case 2:
            cout << "Velocidade permitida: 60km/h";
            break;
        case 3:
            cout << "Velocidade permitida: 80km/h";
            break;
        default:
            cout << "\nOpção inválida.";
            break;
    }

    return 0;
}