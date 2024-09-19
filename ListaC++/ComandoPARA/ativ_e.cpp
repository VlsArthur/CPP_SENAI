#include <iostream>
#include <string>
using namespace std;

/*
e) Crie um programa que solicite ao usuário para inserir um número inteiro e,
em seguida, exiba se esse número é primo ou não.
*/

int main () {
    string primo = " ";
    int num;
    cout << "Digite um número: ";
    cin >> num;
    for (int i = 2; i<num; i++) {
        if (num%i==0) {
            primo = " NÃO ";
            break;
        }
    }
    cout << "O número inserido" << primo << "é primo.";
    return 0;
}