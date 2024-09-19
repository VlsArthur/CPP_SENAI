#include <iostream>
#include <string>
using namespace std;

/*
bb) Escreva um programa que pergunte ao usuário se ele não deseja cancelar
uma operação. Se a resposta for negativa, o programa deve imprimir "Por
favor, confirme o cancelamento da operação".
*/

int main () {
    char resposta;
    cout << "Você deseja manter a operação? (s/n) \nR: ";
    cin >> resposta;
    if (resposta=='n') {
        cout << "\nPor favor, confirme o cancelamento da operação";
    } 
    return 0;
}