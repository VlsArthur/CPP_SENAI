#include <iostream>
using namespace std;

/*
b) Crie um vetor de números decimais e calcule a média dos valores do vetor.
*/

int main() {
    double vetor[10];
    double soma = 0;
    cout << "Digite números decimais: \n";
    for (int i = 0; i < 10; i++) {
      cin >> vetor[i];
      soma += vetor[i];
    }
    cout << "\nA média dos números inseridos é: " << (soma/10);
    
    return 0;
}