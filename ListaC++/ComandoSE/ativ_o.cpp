#include <iostream>
#include <string>
using namespace std;

/*
o) Escreva um programa que pergunte ao usuário se ele deseja comprar um
carro novo e se tem dinheiro suficiente para isso. Se o usuário quiser
comprar um carro novo e tiver dinheiro suficiente, o programa deve imprimir
"Parabéns, você pode comprar um carro novo!".
*/

int main () {
    char resposta1, resposta2;
    cout << "Você deseja comprar um carro novo? (s/n) \nR: ";
    cin >> resposta1;
    cout << "Você possui dinheiro suficiente para isso? (s/n) \nR: ";
    cin >> resposta2;
    if (resposta1=='s' && resposta2=='s') {
        cout << "\nParabéns, você pode comprar um carro novo!";
    }
    return 0;
}