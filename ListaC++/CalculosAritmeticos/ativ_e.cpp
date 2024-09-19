#include <iostream>
#include <cmath>
using namespace std;

/*
e) Escreva um programa que peça ao usuário para digitar um número e exiba a
sua raiz quadrada.
*/

int main() {
    int num;
    cout << "Digite um número: ";
    cin >> num;
    cout << "A raiz quadrada de " << num << " é igual a " << (sqrt(num));
    return 0;
}