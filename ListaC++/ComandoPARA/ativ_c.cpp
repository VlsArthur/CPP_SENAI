#include <iostream>
#include <string>
using namespace std;

/*
c) Crie um programa que solicite ao usuário para inserir uma palavra e, em
seguida, exiba cada letra da palavra em uma linha separada.
*/

int main () {
    string palavra;
    cout << "Digite uma palavra: ";
    cin >> palavra;
    cout << "\nLetras de " << palavra << ":\n";
    for (char letra : palavra) {
        cout << letra << "\n";
    }
    return 0;
}