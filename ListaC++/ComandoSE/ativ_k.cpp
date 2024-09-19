#include <iostream>
#include <string>
using namespace std;

/*
k) Escreva um programa que solicite ao usuário para digitar um número inteiro
e exiba se ele é negativo.
*/

int main () {
    int num;
    cout << "Digite um número: ";
    cin >> num;
    string resultado = (num<0) ? " " : " NÃO ";
    cout << "O número inserido" << resultado << "é negativo.";
    return 0;
}