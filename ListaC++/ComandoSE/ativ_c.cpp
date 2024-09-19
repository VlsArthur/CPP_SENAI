#include <iostream>
#include <string>
using namespace std;

/*
c) Escreva um programa que solicite ao usuário para digitar dois números
inteiros e exiba se eles são iguais.
*/

int main () {
    int num1, num2;
    cout << "Insira o primeiro número: ";
    cin >> num1;
    cout << "Insira o segundo número: ";
    cin >> num2;
    string resultado = (num1==num2) ? " " : " NÃO ";
    cout << "\nO números inseridos" << resultado << "são iguais.";
    return 0;
}