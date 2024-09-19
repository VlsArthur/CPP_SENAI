#include <iostream>
#include <string>
using namespace std;

/*
a) Crie um programa que solicite ao usuário para inserir um número inteiro
positivo e, em seguida, exiba todos os números pares entre 0 e o número
inserido.
*/

int main () {
    int num;
    cout << "Digite um número: ";
    cin >> num;
    cout << "\nNúmeros pares entre 0 e " << num << ":\n";
    num -= (num%2>0) ? 1 : 0;
    int i = 0;
    while (i<=num) {
        cout << i;
        string separacao = (i <num) ? ", " : ".";
        cout << separacao;
        i +=2;
    }
    return 0;
}