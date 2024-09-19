#include <iostream>
#include <string>
using namespace std;

/*
x) Escreva um programa que pergunte ao usuário se ele não é um robô. Se a
resposta for negativa, o programa deve imprimir "Por favor, prove que você
não é um robô".
*/

int main () {
    char resposta;
    cout << "Você é um robô? (s/n) \nR: ";
    cin >> resposta;
    if (resposta=='n') {
        cout << "\nPor favor, prove que você não é um robô";
    } 
    return 0;
}