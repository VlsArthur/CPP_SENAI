#include <iostream>
#include <string>
using namespace std;

/*
b) Escreva um programa que solicite ao usuário para digitar dois números
inteiros e exiba se o primeiro número é menor que o segundo número.
*/

int main () {
    int num1, num2;
    cout << "Insira o primeiro número: ";
    cin >> num1;
    cout << "Insira o segundo número: ";
    cin >> num2;
    string resultado = (num2>num1) ? " " : " NÃO ";
    cout << "\nO segundo número inserido" << resultado << "é maior que o primeiro.";
    return 0;
}