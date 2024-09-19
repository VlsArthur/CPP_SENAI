#include <iostream>
#include <string>
using namespace std;

/*
i) Escreva um programa que solicite ao usuário para digitar dois números reais
e exiba se o primeiro número é menor ou igual ao segundo número.
*/

int main () {
    double num1, num2;
    cout << "Insira o primeiro número: ";
    cin >> num1;
    cout << "Insira o segundo número: ";
    cin >> num2;
    string resultado = (num1<=num2) ? " " : " NÃO ";
    cout << "\nO primeiro número inserido" << resultado << "é menor ou igual ao segundo.";
    return 0;
}