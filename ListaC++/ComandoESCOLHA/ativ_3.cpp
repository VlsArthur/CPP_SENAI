#include <iostream>
#include <string>
using namespace std;

/*
3. Faça um programa que apresente um menu com as opções de dias da semana
(Domingo à Sábado) e exiba uma mensagem informando se é dia útil ou final de
semana.
*/

int main() {
    int opcao;
    string dias[7] = {"Domingo", "Segunda-feira", "Terça-feira", "Quarta-feira", "Quinta-feira", "Sexta-feira", "Sábado"};
    cout << "Escolha um dia: \n";
    for (int i = 0; i<7; i++) {
        cout << i+1 << ") " << dias[i] << "\n";
    }
    cout << "R: ";
    cin >> opcao;
    switch (opcao) {
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            cout << "\n" << dias[opcao-1] << " é um dia útil.";
            break;
        case 1:
        case 7:
            cout << "\n" << dias[opcao-1] << " é fim de semana.";
            break;
        default:
            cout << "\nOpção inválida.";
            break;
    }

    return 0;
}