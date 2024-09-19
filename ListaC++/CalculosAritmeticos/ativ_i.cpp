#include <iostream>
using namespace std;

/*
i) Escreva um programa que solicite ao usuário para digitar um número e exiba
o seu resto da divisão por 2.
*/

int main() {
    int num;
    cout << "Digite um número: ";
    cin >> num;
    cout << "O resto da divisão de " << num << " por 2 é igual a " << (num%2);
    return 0;
}