#include <iostream>
using namespace std;

/*
w) Escreva um programa que solicite ao usuário um número inteiro e verifique
se ele é maior do que 10 OU menor do que 0. Se o número for maior do que
10 OU menor do que 0, o programa deve imprimir a mensagem "Número
inválido!".
*/

int main () {
    int num;
    cout << "Digite um número: ";
    cin >> num;
    if (num>10 || num<0) {
        cout << "Número inválido!";
    }
    return 0;
}