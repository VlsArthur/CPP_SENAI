#include <iostream>
using namespace std;

/*
d) Escreva um programa que peça ao usuário para digitar dois números e exiba
o resultado da divisão do primeiro pelo segundo.
*/

int main() {
    float num1, num2;
    cout << "Digite o dividendo: ";
    cin >> num1;
    cout << "Digite o divisor: ";
    cin >> num2;
    cout << "\n" << num1 << " / " << num2 << " = " << (num1/num2);
    return 0;
}