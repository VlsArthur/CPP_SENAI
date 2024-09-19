#include <iostream>
using namespace std;

/*
d) Crie um vetor de inteiros e encontre o menor valor no vetor.
*/

int main() {
    int vetor[10];
    cout << "Digite números inteiros: \n";
    for (int i = 0; i < 10; i++) {
      cin >> vetor[i];
    }
    int menor = vetor[0];
    for (int i = 1; i < 10; i++) {
      menor = (vetor[i] < menor ? vetor[i] : menor);
    }
    cout << "\nO menor dos números inseridos é: " << menor;

    return 0;
}