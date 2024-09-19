#include <iostream>
using namespace std;

/*
a) Crie um vetor de inteiros e imprima na tela o valor de cada elemento do
vetor.
*/

int main() {
    int vetor[10];
    cout << "Digite números inteiros: \n";
    for (int i = 0; i < 10; i++) {
      cin >> vetor[i];
    }
    cout << "\nNúmeros inseridos: ";
    for (int i = 0; i < 10; i++) {
      cout << vetor[i] << " ";
    }
    return 0;
}