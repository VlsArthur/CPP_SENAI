#include <iostream>
#include <string>
#include <cmath>
using namespace std;

/*
l) Escreva um programa que solicite ao usuário para digitar dois números
inteiros e exiba se a diferença entre eles é menor ou igual a 10.
*/

int main () {
    int num1, num2;
    cout << "Insira o primeiro número: ";
    cin >> num1;
    cout << "Insira o segundo número: ";
    cin >> num2;
    string resultado = (abs(num1-num2)<=10) ? " " : " NÃO ";
    cout << "\nA diferença entre os números inseridos" << resultado << "é menor ou igual a 10.";
    return 0;
}