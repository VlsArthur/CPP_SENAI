#include <iostream>
using namespace std;
/*
a) Escreva um programa que solicite ao usuário para digitar um número inteiro e armazene-o em uma variável. Em seguida, exiba o valor da variável na tela.
*/

int main(){
  int numero;
  cout << "Digite um número inteiro: ";
  cin >> numero;
  cout << "O valor digitado é: " << numero << endl;
  return 0;
}