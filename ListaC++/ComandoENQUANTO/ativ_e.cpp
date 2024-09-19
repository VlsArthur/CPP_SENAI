#include <iostream>
using namespace std;

/*
e) Crie um programa que solicite ao usuário para inserir números inteiros até
que um número negativo seja inserido. Em seguida, exiba a soma dos
números inseridos (excluindo o número negativo).
*/

int main () {
    int numInserido = 0, soma = 0, i = 1;
    cout << "Insira as parcelas da soma (digite um número negativo para obter o resultado): \n\n";
    while (numInserido>=0) {
        soma += numInserido;
        cout << i << "ª parcela: ";
        cin >> numInserido;
        i++;
    }
    cout << "\nA soma dos números positivos inseridos é igual a " << soma << ".";
    return 0;
}