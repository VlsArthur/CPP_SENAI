#include <iostream>
using namespace std;

/*
cc) Escreva um programa que pergunte ao usuário os lados de um triângulo.
Determinar se um triângulo é equilátero, escaleno ou isósceles
*/

int main() {
    double lado1, lado2, lado3;
    int cont = 0;
    cout << "Insira os lados do triângulo: \n";
    cin >> lado1;
    cin >> lado2;
    cin >> lado3;
    cont += (lado1==lado2) ? 1 : 0;
    cont += (lado1==lado3) ? 1 : 0;
    cont += (lado2==lado3) ? 1 : 0;
    if (cont==3) {
        cout << "\nTriângulo equilátero";
    } else if (cont==1) {
        cout << "\nTriângulo isósceles";
    } else {
        cout << "\nTriângulo escaleno";
    }
    return 0;
}