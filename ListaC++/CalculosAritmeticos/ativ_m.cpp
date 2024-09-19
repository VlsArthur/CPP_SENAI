#include <iostream>
#include <iomanip>
using namespace std;

/*
m) Faça um programa que converta uma temperatura em Celsius para
Fahrenheit.
*/

int main() {
    double celsius, fahrenheit;
    cout << "Insira a temperatura em Celsius: ";
    cin >> celsius;
    fahrenheit = (celsius * 9/5) + 32;
    cout << "Temperatura em Fahrenheit: " << fixed << setprecision(2) << fahrenheit << "° F";
    return 0;
}