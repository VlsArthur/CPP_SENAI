#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

/*
g) Criar um algoritmo que armazene 5 nomes em um vetor. Ordenar e imprimir
uma listagem.
*/

int main() {
    string vetor[5], vetorMinusculo[5];
    
    for (int i = 0; i < 5; i++) {
      cout << "Digite o " << (i+1) << "° nome: ";
      cin >> vetor[i];
      vetorMinusculo[i] = vetor[i];
      transform(vetor[i].begin(), vetor[i].end(), vetorMinusculo[i].begin(), ::tolower);
    }
    string chave, chaveMinuscula;
    for (int i = 1; i < 5; i++) {
      chave = vetor[i];
      chaveMinuscula = vetorMinusculo[i];
      int j = i - 1;
      while (j>=0 && vetorMinusculo[j].compare(chaveMinuscula)>0) {
        vetor[j+1] = vetor[j];
        vetorMinusculo[j+1] = vetorMinusculo[j];
        j -= 1;
      }
      vetorMinusculo[j+1] = chaveMinuscula;
      vetor[j+1] = chave;
    }
    cout << "\nOrdem alfabética: \n";
    for (int i = 0; i<5; i++) {
      cout << vetor[i] << "\n";
    }

    return 0;
}