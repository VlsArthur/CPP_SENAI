#include <iostream>
using namespace std;

/*
b) Escreva um programa que peça ao usuário para digitar um número e exiba o
seu dobro.
*/

int main() {
    int num;
    cout << "Digite um número: ";
    cin >> num;
    cout << "O dobro de " << num << " é igual a " << (num*2);
    return 0;
}