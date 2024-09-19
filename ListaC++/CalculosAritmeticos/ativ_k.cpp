#include <iostream>
using namespace std;

/*
k) Escreva um programa que solicite ao usuário para inserir três números e
calcule a média aritmética deles.
*/

int main() {
    double num1, num2, num3, media;
    cout << "insira o primeiro número: ";
    cin >> num1;
    cout << "insira o segundo número: ";
    cin >> num2;
    cout << "insira o terceiro número: ";
    cin >> num3;

    media = (num1 + num2 + num3) / 3;

    cout << "A média dos números inseridos é igual a: " << media;

    return 0;
}