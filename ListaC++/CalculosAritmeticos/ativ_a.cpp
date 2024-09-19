#include <iostream>
using namespace std;

/*
a) Escreva um programa que peça ao usuário para digitar dois números e exiba
a soma deles.
*/

int main() {
    int num1, num2;
    cout << "Digite a primeira parcela da soma: ";
    cin >> num1;
    cout << "Digite a segunda parcela da soma: ";
    cin >> num2;
    cout << "\n" << num1 << " + " << num2 << " = " << (num1+num2);
    return 0;
}