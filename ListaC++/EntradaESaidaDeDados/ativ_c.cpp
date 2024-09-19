#include <iostream>
#include <string.h>
using namespace std;

/*c) Escreva um programa que solicite ao usuário para digitar "verdadeiro" ou "falso" e armazene-o em uma variável. Em seguida, exiba o valor da variável na tela.*/

int main(){
  string palavra;
  cout << "Digite verdadeiro ou falso: ";
  cin >> palavra;
  cout << "O valor digitado é: " << palavra << endl;
  return 0;
}