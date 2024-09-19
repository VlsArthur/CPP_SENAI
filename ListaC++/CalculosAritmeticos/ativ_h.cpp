#include <iostream>
using namespace std;

/*
h) Escreva um programa que solicite ao usuário para digitar dois números e
exiba o resultado da multiplicação entre eles.
*/

int main() {
    int num1, num2;
    cout << "Digite o primeiro fator da multiplicação: ";
    cin >> num1;
    cout << "Digite o segundo fator da multiplicação: ";
    cin >> num2;
    cout << "\n" << num1 << " * " << num2 << " = " << (num1*num2);
    return 0;
}