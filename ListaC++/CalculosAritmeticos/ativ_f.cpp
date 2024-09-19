#include <iostream>
using namespace std;

/*
f) Escreva um programa que solicite ao usuário para digitar dois números e
exiba o resultado da subtração do segundo pelo primeiro.
*/

int main() {
    int num1, num2;
    cout << "Digite o minuendo: ";
    cin >> num1;
    cout << "Digite a subtraendo: ";
    cin >> num2;
    cout << "\n" << num1 << " - " << num2 << " = " << (num1-num2);
    return 0;
}