#include <iostream>
using namespace std;

/*
c) Crie um programa que solicite ao usuário para inserir uma sequência de
números inteiros e, em seguida, exiba a soma desses números.
*/

int main () {
    int numTotal, numInserido, soma = 0;
    cout << "Digite o número de parcelas da soma: ";
    cin >> numTotal;
    
    int i = 1;
    cout << "\n";
    while (i<=numTotal) {
        cout << i << "ª parcela: ";
        cin >> numInserido;
        soma += numInserido;
        i++;
    }
    cout << "\nA soma dos número inseridos é igual a " << soma << ".";
    return 0;
}