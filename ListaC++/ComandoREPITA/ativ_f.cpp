#include <iostream>
#include <string>
using namespace std;

/*
f) Crie um programa que solicite ao usuário para inserir um número inteiro
positivo e, em seguida, exiba todos os números ímpares entre 0 e o número
inserido.
*/

int main () {
    int num;
    cout << "Digite um número: ";
    cin >> num;
    cout << "\nNúmeros ímpares entre 0 e " << num << ":\n";
    num -= (num%2==0) ? 1 : 0;
    int i = 1;
    do {
        cout << i;
        string separacao = (i <num) ? ", " : ".";
        cout << separacao;
        i +=2;
    } while (i<=num);
    return 0;
}