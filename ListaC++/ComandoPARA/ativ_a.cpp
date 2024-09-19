#include <iostream>
#include <string>
using namespace std;

/*
a) Crie um programa que exiba todos os números pares entre 0 e 100.
*/

int main () {
    cout << "Números pares de 0 a 100:\n";
    for (int i = 0; i<=100; i += 2) {
        cout << i;
        string separacao = (i <100) ? ", " : ".";
        cout << separacao;
    }
    return 0;
}