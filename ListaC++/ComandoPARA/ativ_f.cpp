#include <iostream>
#include <climits>
using namespace std;

/*
f) Desenvolva um programa que solicite ao usuário para inserir uma sequência
de números inteiros e, em seguida, exiba o maior número inserido.
*/

int main () {
    int numTotal, numInserido;
    int maior = INT_MIN;
    cout << "Insira números deseja digitar: ";
    cin >> numTotal;
    cout << "\n";
    for (int i = 1; i<=numTotal; i++) {
        cout << i << "º número: ";
        cin >> numInserido;
        if (numInserido>maior) {
            maior = numInserido;
        }
    }
    cout << "\nO número maior numero inserido foi " << maior << ".";
    return 0;
}