#include <iostream>
using namespace std;

/*
j) Desenvolva um programa que exiba a soma dos números pares entre 1 e 100.
*/

int main () {
    int soma = 0;
    for (int i = 2; i<=100; i+=2) {
        soma += i;
    }
    cout << "Soma dos números pares entre 1 e 100: " << soma;
    return 0;
}