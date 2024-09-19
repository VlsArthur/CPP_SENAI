#include <iostream>
using namespace std;

/*
b) Desenvolva um programa que solicite ao usuário para inserir um número
inteiro e, em seguida, exiba a tabuada desse número até o número 10.
*/

int main() {
    int num;
    cout << "Digite um número: ";
    cin >> num;
    while (num<=10) {
        cout << "Tabuada do " << num << ":\n";
        int i = 1;
        while (i<=10) {
            cout << num << " * " << i << " = " << (num*i) << "\n";
            i++;
        }
        cout << "\n";
        num++;
    }
    return 0;
}