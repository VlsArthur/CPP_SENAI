#include <iostream>
#include <string>
using namespace std;

/*
m) Faça um programa que apresente um menu com as opções de meses do ano
(janeiro a dezembro) e solicite ao usuário que escolha um mês. Em seguida,
exiba uma mensagem informando a quantidade de dias do mês escolhido.
*/

int main () {
    string meses[12] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    int diasQuant[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int escolha;

    cout << "Escolha um mês: \n\n";
    for (int i = 0; i <12; i++) {
        cout << i+1 << ") " << meses[i] << "\n";
    }
    cout << "\nEscolha: ";
    cin >> escolha;
    cout << "O mês escolhido tem " << diasQuant[escolha-1] << "dias.";
    return 0;
}