#include <iostream>
#include <cmath>
using namespace std;

/*
g) Escreva um programa que solicite ao usuário para digitar um número e exiba
o seu valor absoluto.
*/

int main() {
    int num;
    cout << "Digite um número: ";
    cin >> num;
    cout << "O valor absoluto de " << num << " é igual a " << (abs(num));
    return 0;
}