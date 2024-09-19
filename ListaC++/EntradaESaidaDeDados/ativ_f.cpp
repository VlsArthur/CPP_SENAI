#include <iostream>
#include <string>
using namespace std;
/*
Escreva um programa que solicite ao usuário para digitar o seu nome  e a sua idade, e armazene-os em variáveis, respectivamente. Em seguida, exiba essas informações na tela.
*/

int main(){
    string nome;
    int idade;

    cout << "Digite um nome: ";
    cin >> nome;

    cout << "Digite sua idade: ";
    cin >> idade;

    cout << "Nome: " << nome << endl;
    cout << "Idade:" << idade << endl;

    return 0;
}