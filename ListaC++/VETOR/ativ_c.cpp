#include <iostream>
using namespace std;

/*
c) Crie um vetor de inteiros e encontre o maior valor no vetor.
*/

int main() {
    int vetor[10];
    cout << "Digite números inteiros: \n";
    for (int i = 0; i < 10; i++) {
      cin >> vetor[i];
    }
    int maior = vetor[0];
    for (int i = 1; i < 10; i++) {
      maior = (vetor[i] > maior ? vetor[i] : maior);
    }
    cout << "\nO maior dos números inseridos é: " << maior;

    return 0;
}