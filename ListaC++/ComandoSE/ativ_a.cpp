#include <iostream>
#include <string>
using namespace std;

/*
a) Escreva um programa que solicite ao usuário para digitar dois números
inteiros e exiba se o primeiro número é maior que o segundo número.
*/

int main () {
    int num1, num2;
    cout << "Insira o primeiro número: ";
    cin >> num1;
    cout << "Insira o segundo número: ";
    cin >> num2;
    string resultado = (num1>num2) ? " " : " NÃO ";
    cout << "\nO primeiro número inserido" << resultado << "é maior que o segundo.";
    return 0;
}