#include <iostream>
#include <string>
using namespace std;
/*
Escreva um programa que solicite ao usuário para digitar o seu endereço  completo, incluindo o número da casa, rua, bairro, cidade e estado. Armazene cada informação em uma variável string e, em seguida, exiba todas as informações juntas em uma única linha.
*/

int main(){
    string rua, bairro, cidade, estado;
    int numero;

    cout << "Digite a sua rua: ";
    cin >> rua;

    fflush(stdin);
    cout << "Digite o numero da residencia: ";
    cin >> numero;

    cout << "Digite o seu bairro: ";
    cin >> bairro;

    cout << "Digite a sua cidade: ";
    cin >> cidade;

    cout << "Digite o seu estado: ";
    cin >> estado;

    cout << "INFORMACOES!";
    cout <<"Rua: " << rua << "\nNumero: " << numero << "\nBairro: " << bairro << "\nCidade: " << cidade << "\nEstado: "  << estado << endl;

    return 0;
}

//cin.ignore(numeric_limits<streamsize>::max(),'\n');