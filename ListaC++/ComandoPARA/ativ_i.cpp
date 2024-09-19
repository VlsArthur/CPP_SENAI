#include <iostream>
#include <string>
using namespace std;

/*
i) Crie um programa que exiba todos os números primos entre 1 e 100.
*/

int main () {
    bool primo;
    cout << "Números primos entre 1 e 100: \n2, ";
    for (int i = 2; i<=97; i++) {
        for (int j = 2; j<i; j++) {
            if (i%j==0) {
                primo = false;
                break;
            }
        }
        if (primo) {
            string separacao = (i<97) ? ", " : ".";
            cout << i << separacao;
        }
        primo = true;
    }
    return 0;
}