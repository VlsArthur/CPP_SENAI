#include <iostream>
using namespace std;

/*
j) Fazer um algoritmo para ler um conjunto de 100 números reais e informar:
1. Quantos números lidos são iguais a 30
2. Quantos são maior que a media
3. Quantos são iguais a media
*/

int main() {
    double vet[100];
    double soma = 0;
    int cont1 = 0, cont2 = 0, cont3 = 0;

    for (int i = 0; i < 100; i++) {
      cin >> vet[i];
      soma += vet[i];
    }

    double media = soma / 100;

    for (int i = 0; i < 100; i++) {
      if (vet[i] == 30) {
        cont1++;
      }
      if (vet[i] > media) {
        cont2++;
      }
      if (vet[i] == media) {
        cont3++;
      }
    }

    cout << "\nNúmeros iguais a 30: " << cont1;
    cout << "\nNúmeros maiores que a média: " << cont2;
    cout << "\nNúmeros iguais a média: " << cont3;

    return 0;
}