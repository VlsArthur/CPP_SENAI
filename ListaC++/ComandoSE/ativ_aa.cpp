#include <iostream>
#include <string>
using namespace std;

/*
aa) Crie um programa que peça ao usuário para digitar uma palavra e verifique
se ela não é vazia. Se a condição for verdadeira, o programa deve imprimir
"A palavra não é vazia".
*/

int main () {
    string resposta;
    cout << "Digite uma palavra: ";
    cin >> resposta;
    if (!resposta.empty()) {
        cout << "A palavra não é vazia";
    } else {
      cout<< "oi";
      }
    return 0;
}