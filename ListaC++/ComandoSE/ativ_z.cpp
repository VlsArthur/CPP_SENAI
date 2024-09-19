#include <iostream>
#include <string>
using namespace std;

/*
z) Escreva um programa que pergunte ao usuário se ele não é um membro
inativo de um clube. Se a resposta for negativa, o programa deve imprimir
"Por favor, atualize sua inscrição para continuar usufruindo dos benefícios
do clube".
*/

int main () {
    char resposta;
    cout << "Você é um membro ativo do clube? (s/n) \nR: ";
    cin >> resposta;
    if (resposta=='n') {
        cout << "\nPor favor, atualize sua inscrição para continuar usufruindo dos benefícios do clube";
    } 
    return 0;
}