#include <iostream>
using namespace std;

/*
q) Escreva um programa que solicite ao usuário três notas e seus respectivos
pesos, e calcule a média ponderada.
*/

int main() {
    double nota1, nota2, nota3, peso1, peso2, peso3, media;
    cout << "Insira a primeira nota: ";
    cin >> nota1;
    cout << "Insira o peso da primeira nota: ";
    cin >> peso1;
    nota1 *= peso1;
    cout << "Insira o segunda nota: ";
    cin >> nota2;
    cout << "Insira o peso da segunda nota: ";
    cin >> peso2;
    nota2 *= peso2;
    cout << "Insira o terceira nota: ";
    cin >> nota3;
    cout << "Insira o peso da primeira nota: ";
    cin >> peso3;
    nota3 *= peso3;

    media = (nota1 + nota2 + nota3) / (peso1 + peso2 + peso3);

    cout << "A média ponderada das notas inseridas é igual a: " << media;

    return 0;
}