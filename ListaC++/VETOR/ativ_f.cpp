#include <iostream>
using namespace std;

/*
f) Crie um vetor de inteiros e ordene os valores do vetor em ordem crescente.
*/

int main () {
    int vetor[10];
    cout << "Digite números inteiros: \n";
    for (int i = 0; i < 10; i++) {
      cin >> vetor[i];
    }
    int chave;
    for (int i = 1; i < 10; i++) {
      chave = vetor[i];
      int j = i - 1;
      while (j>=0 && vetor[j] > chave) {
        vetor[j+1] = vetor[j];
        j -= 1;
      }
      vetor[j+1] = chave;
    }
    cout << "\nOrdem decrescente: ";
    for (int i = 0; i<10; i++) {
      cout << vetor[i] << " ";
    }

    return 0;
}