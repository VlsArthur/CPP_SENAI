#include <iostream>
using namespace std;

/*
7. Escreva um programa que simule um caixa eletrônico, onde o usuário escolhe o tipo
de operação que deseja realizar (saque, depósito ou consulta de saldo) e realize a
operação correspondente.
*/

int main() {
    double saldo = 1400.12;
    double valorSaque, valorDeposito;
    int opcao;
    cout << "Selecione a operação \n";
    cout << "1) Saque\n"; 
    cout << "2) Depósito\n";
    cout << "3) Consulta de saldo\n";
    cout << "R: ";
    cin >> opcao;
    switch (opcao) {
        case 1:
            cout << "\nInsira o valor a ser sacado: ";
            cin >> valorSaque;
            cout << "Novo saldo: " << saldo-valorSaque;
            break;
        case 2:
            cout << "\nInsira o valor de depósito: ";
            cin >> valorDeposito;
            cout << "Novo saldo: " << saldo+valorDeposito;
            break;
        case 3:
            cout << "\nSaldo " << saldo;
            break;
        default:
            cout << "\nOpção inválida.";
            break;
    }

    return 0;
}