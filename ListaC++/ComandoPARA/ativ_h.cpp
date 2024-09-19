#include <iostream>
#include <string>
using namespace std;

/*
h) Desenvolva um programa que solicite ao usuário para inserir um número
inteiro positivo e, em seguida, exiba todos os divisores desse número.
*/

int main () {
    int num;
    cout << "Digite um número: ";
    cin >> num;
    cout << "\nDivisores de " << num << ": \n";
    for (int i = 1; i <= num; i++) {
        if (num%i==0) {
            string separacao = (i<num) ? ", " : ".";
            cout << i << separacao;
        }
    }
    return 0;
}