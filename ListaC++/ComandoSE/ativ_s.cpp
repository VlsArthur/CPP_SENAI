#include <iostream>
#include <string>
using namespace std;

/*
s) Escreva um programa que pergunte ao usuário se ele deseja adicionar açúcar
ou leite ao seu café. Se o usuário responder que deseja adicionar açúcar OU
leite, o programa deve imprimir a mensagem "Café com adicional
preparado!".
*/

int main () {
    char resposta1, resposta2;
    cout << "Você deseja adicionar açúcar ao café? (s/n) \nR: ";
    cin >> resposta1;
    cout << "Você deseja adicionar açúcar ao café? (s/n) \nR: ";
    cin >> resposta2;
    string resultado = (resposta1=='s' || resposta2=='s') ? " com adicional " : " ";
        cout << "\nCafé" << resultado << "preparado!";
    return 0;
}