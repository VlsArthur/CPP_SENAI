#include <iostream>
#include <string>
using namespace std;

/*
q) Escreva um programa que pergunte ao usuário se ele é assinante de um
serviço de streaming e se já assistiu a uma série específica. Se o usuário for
assinante e já tiver assistido à série, o programa deve imprimir "Ótimo, agora
você pode assistir à nova temporada!".
*/

int main () {
    char resposta1, resposta2;
    cout << "Você é um assinante Amazon Prime Video? (s/n) \nR: ";
    cin >> resposta1;
    cout << "Você já assistiu \"Invencível\"? (s/n) \nR: ";
    cin >> resposta2;
    if (resposta1=='s' && resposta2=='s') {
        cout << "\nÓtimo, agora você oode assistir à nova temporada!";
    } 
    return 0;
}