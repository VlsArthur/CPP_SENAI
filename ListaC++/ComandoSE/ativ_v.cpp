#include <iostream>
#include <string>
using namespace std;

/*
v) Crie um programa que solicite ao usuário o seu nome e verifique se ele é
igual a "Wilson" OU "Gloria". Se o nome for igual a "Wilson" OU "Gloria",
o programa deve imprimir a mensagem "Olá, bem-vindo(a) de volta!".
*/

int main () {
    string resposta;
    cout << "Insira o seu nome: ";
    cin >> resposta;
    string resultado = (resposta=="Wilson" || resposta=="Gloria") ? " de volta" : "";
    cout << "Olá, bem vindo(a)" << resultado << "!";
    return 0;
}