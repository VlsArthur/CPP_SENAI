#include <iostream>
#include <string>
using namespace std;

/*
h) Escreva um programa que solicite ao usuário para digitar um ano. Verifique
se um ano é bissexto.
*/

int main () {
    int ano;
    cout << "Digite um ano: ";
    cin >> ano;
    string resultado = ( (ano%4==0 && ano%100!=0) || (ano%100==0 && ano%400==0) ) ? " " : " NÃO ";
    cout << "O ano inserido" << resultado << "é bissexto.";
    return 0;
}