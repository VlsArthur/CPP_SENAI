#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

/*
l) Escreva um programa que solicite ao usuário seu peso (em kg) e altura (em
metros) e calcule o Índice de Massa Corporal (IMC).
*/

int main() {
    double peso, altura, imc;
    cout << "Insira seu peso: ";
    cin >> peso;
    cout << "Insira sua altura: ";
    cin >> altura;
    imc = peso / (pow(altura, 2));
    cout << "\nIMC: " << fixed << setprecision(2) << imc;
    return 0;
}