#include <iostream>
#include <string>
using namespace std;

/*
y) Crie um programa que peça ao usuário para digitar um número e verifique se
ele não é igual a zero. Se a condição for verdadeira, o programa deve
imprimir "O número é diferente de zero".
*/

int main () {
    int num;
    cout << "Digite um número: ";
    cin >> num;
    string resultado = (num==0) ? " igual a " : " diferente de ";
    cout << "O número é" << resultado << "zero.";
    return 0;
}