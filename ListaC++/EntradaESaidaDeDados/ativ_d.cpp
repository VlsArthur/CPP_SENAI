#include <iostream>
#include <string>
using namespace std;
/*
d) Escreva um programa que solicite ao usuário para digitar um nome e armazene-o em uma variável. Em seguida, exiba o valor da variável na tela.
*/

int main(){
    cout << "Digite um nome: ";
    string nome;
    cin >> nome;
    cout << "O nome digitado foi: " << nome;

    return 0;
}