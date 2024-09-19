#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

/*
o) Escreva um programa que solicite ao usuário o raio de um círculo e calcule
sua área
*/

int main() {
    double raio, area;
    cout << "Digite raio da circunferência: ";
    cin >> raio;
    area = 3.14 * pow(raio, 2);
    cout << "\nA área da circunferêncai é igual a " << fixed << setprecision(2) << area;
    return 0;
}