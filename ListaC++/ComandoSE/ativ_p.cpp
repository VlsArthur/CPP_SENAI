#include <iostream>
#include <string>
using namespace std;

/*
p) Escreva um programa que pergunte ao usuário se ele possui um diploma de
ensino superior e se tem mais de 21 anos. Se o usuário possuir um diploma
de ensino superior e tiver mais de 21 anos, o programa deve imprimir
"Parabéns, você está qualificado para a vaga!".
*/

int main () {
    char resposta1, resposta2;
    cout << "Você possui um diploma de ensino superior? (s/n) \nR: ";
    cin >> resposta1;
    cout << "Você tem mais de 21 anos? (s/n) \nR: ";
    cin >> resposta2;
    if (resposta1=='s' && resposta2=='s') {
        cout << "\nParabéns, você está qualificado para a vaga!";
    } else {
        cout << "\nVocê não está qualificado para a vaga.";
    }
    return 0;
}