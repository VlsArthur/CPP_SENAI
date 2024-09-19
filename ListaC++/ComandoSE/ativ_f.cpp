#include <iostream>
#include <string>
using namespace std;

/*
f) Escreva um programa que solicite ao usuário para digitar um número inteiro
e exiba se ele é par.
*/

int main () {
    int num;
    cout << "Digite um número: ";
    cin >> num;
    string resultado = (num%2==0) ? " " : " NÃO ";
    cout << "O número inserido" << resultado << "é par.";
    return 0;
}