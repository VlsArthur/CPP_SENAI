#include <iostream>
#include <iomanip>
using namespace std;

/*
n) Escreva um programa que solicite ao usuário para digitar o preço de um
produto e o seu desconto em porcentagem, e armazene-os em variáveis. Em
seguida, calcule o preço final com o desconto e exiba-o na tela.
*/

int main() {
    double preco, desconto, precoFinal;
    cout << "Digite o preço do produto: ";
    cin >> preco;
    cout << "Digite o valor do desconto (em %): ";
    cin >> desconto;
    precoFinal = preco - (preco*(desconto/100));
    cout << "\nPreço final: R$" << fixed << setprecision(2) << precoFinal;
    return 0;
}