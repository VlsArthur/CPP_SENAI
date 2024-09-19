#include <iostream>
using namespace std;

/*
d) Desenvolva um programa que solicite ao usuário para inserir um número
inteiro positivo e, em seguida, exiba a soma de todos os números entre 1 e o
número inserido.
*/

int main () {
    int num, soma;
    cout << "Digite um número: ";
    cin >> num;
    for (int i = 1; i<=num; i++) {
        soma += i;
    }
    cout << "\nSoma dos números entre 1 e " << num << ": " << soma;
    return 0;
}