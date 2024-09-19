#include <iostream>
#include <string>
using namespace std;

/*
d) Escreva um programa que solicite ao usuário para digitar três números
inteiros e exiba se o primeiro número é menor que o segundo número e
maior que o terceiro número.
*/

int main () {
    int num1, num2, num3;
    cout << "Insira o primeiro número: ";
    cin >> num1;
    cout << "Insira o segundo número: ";
    cin >> num2;
    cout << "Insira o terceiro número: ";
    cin >> num3;
    string resultado = (num1<num2 && num1>num3) ? " " : " NÃO ";
    cout << "\nO primeiro número inserido" << resultado << "é menor que o segundo e maior que o terceiro.";
    return 0;
}