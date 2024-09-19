#include <iostream>
#include <string>
using namespace std;

/*
n) Escreva um programa que pergunte ao usuário sua idade e se tem carteira de
motorista. Se o usuário tiver mais de 18 anos e possuir carteira de motorista,
o programa deve imprimir "Você pode dirigir".
*/

int main () {
    int resposta1;
    char resposta2;
    cout << "Insira sua idade: ";
    cin >> resposta1;
    if (resposta1>=18) {
        cout << "Você possui uma carteira de habilitação? (s/n) \nR: ";
        cin >> resposta2;
    }
    string resultado = (resposta1>=18 && resposta2=='s') ? " " : " NÃO ";
    cout << "\nVocê" << resultado << "pode dirigir.";
    return 0;
}