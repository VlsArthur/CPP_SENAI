#include <iostream>
using namespace std;

/*
j) Escreva um programa que solicite ao usuário para digitar um número e exiba
o resultado da divisão inteira.
*/

int main() {
    double num;
    cout << "Digite um número: ";
    cin >> num;
    int metade = num/2;
    cout << "A divisão inteira de " << num << " por 2 é igual a " << metade;
    return 0;
}