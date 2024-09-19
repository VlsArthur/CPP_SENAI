#include <iostream>
using namespace std;

/*
4. Escreva um programa que apresente um menu com as opções de animais (cachorro,
gato e pássaro) e exiba uma mensagem diferente dependendo da escolha.
*/

int main() {
    int opcao;
    cout << "Selecione a espécie do seu animal \n";
    cout << "1) Cachorro \n"; 
    cout << "2) Gato\n";
    cout << "3) Pássaro\n";
    cout << "R: ";
    cin >> opcao;
    switch (opcao) {
        case 1:
            cout << "\nSugestões de nome: Rex, Luna, Tico, Max, Lola";
            break;
        case 2:
            cout << "\nSugestões de nome: Mia, Oliver, Nina, Simba, Nala";
            break;
        case 3:
            cout << "\nSugestões de nome:Kiwi, Sky, Coco, Zephyr, Lola";
            break;
        default:
            cout << "\nOpção inválida.";
            break;
    }

    return 0;
}