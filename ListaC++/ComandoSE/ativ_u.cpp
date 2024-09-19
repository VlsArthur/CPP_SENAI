#include <iostream>
#include <string>
using namespace std;

/*
u) Escreva um programa que pergunte ao usuário se ele deseja comprar um
produto. Se o usuário responder "sim" OU "s", o programa deve imprimir a
mensagem "Obrigado pela compra!".
*/

int main () {
    string resposta;
    cout << "Você deseja comprar essa calça? \nR: ";
    cin >> resposta;
    if (resposta=="sim" || resposta=="s") {
        cout << "\nObrigado pela compra!";
    }
    return 0;
}