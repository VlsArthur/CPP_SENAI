#include <iostream>
using namespace std;

/*
g) Crie um programa que exiba a tabuada do número 5 até o número 10.
*/

int main() {
    for (int i = 5; i<=10; i++) {
        cout << "Tabuada do " << i << ":\n";
        for (int j = 1; j<=10; j++) {
            cout << i << " * " << j << " = " << (i*j) << "\n";
        }
        cout << "\n";
    }
    return 0;
}