#include <iostream>
using namespace std;

/*
6. Desenvolva um programa que apresente um menu com as opções de tamanhos de
camisetas (P, M e G) e solicite ao usuário que escolha uma delas. Em seguida, informe
o preço da camiseta de acordo com o tamanho escolhido.
*/

int main() {
    int opcao;
    cout << "Selecione o tamanho da camiseta \n";
    cout << "1) P\n"; 
    cout << "2) M\n";
    cout << "3) G\n";
    cout << "R: ";
    cin >> opcao;
    switch (opcao) {
        case 1:
            cout << "Preço: R$ 60,00";
            break;
        case 2:
            cout << "Preço: R$75,00";
            break;
        case 3:
            cout << "Preço: R$ 90,00";
            break;
        default:
            cout << "\nOpção inválida.";
            break;
    }

    return 0;
}