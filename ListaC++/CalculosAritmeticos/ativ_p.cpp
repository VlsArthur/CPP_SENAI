#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

/*
p) Escreva um programa que solicite ao usuário o raio e a altura de um cilindro
e calcule seu volume.
*/

int main() {
    double raio, altura, volume;
    cout << "Digite raio do cilindro: ";
    cin >> raio;
    cout << "Digite a altura do cilindro: ";
    cin >> altura;
    volume = 3.14 * pow(raio, 2) * altura;
    cout << "\nO volume do cilinro é igual a " << fixed << setprecision(2) << volume;
    return 0;
}