#include <iostream>
using namespace std;

/*
t) Crie um programa que solicite ao usuário um número inteiro e verifique se
ele é divisível por 3 OU por 5. Se o número for divisível por 3 OU por 5, o
programa deve imprimir a mensagem "O número é divisível por 3 ou por
5!".
*/

int main () {
    int num;
    cout << "Digite um número: ";
    cin >> num;
    if (num%3==0 || num%5==0) {
        cout << "O número é divisível por 3 ou por 5!";
    }
    return 0;
}