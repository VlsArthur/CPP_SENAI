#include <iostream>
using namespace std;

/*
c) Escreva um programa que peça ao usuário para digitar um número e exiba a
sua metade.
*/

int main() {
    double num;
    cout << "Digite um número: ";
    cin >> num;
    cout << "A metade de " << num << " é igual a " << (num/2);
    return 0;
}