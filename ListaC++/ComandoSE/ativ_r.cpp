#include <iostream>
#include <string>
using namespace std;

/*
r) Escreva um programa que solicite ao usuário o seu nome e idade. O
programa deve verificar se o nome possui mais de 3 caracteres e se a idade é
maior ou igual a 18 anos. Se ambas as condições forem verdadeiras, o
programa deve imprimir "Acesso permitido". Caso contrário, deve imprimir
"Acesso negado".
*/

int main () {
    string resposta1;
    int resposta2;
    cout << "Insira seu nome: ";
    cin >> resposta1;
    cout << "Insira sua idade: ";
    cin >> resposta2;
    string resultado = (resposta1.length()>3 && resposta2>=18) ? "permitido" : "negado";
    cout << "\nAcesso " << resultado << ".";
    return 0;
}