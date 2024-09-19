#include <iostream>
using namespace std;

/*
2. Escreva um programa que apresente um menu com as quatro operações básicas
(adição, subtração, multiplicação e divisão) e solicite ao usuário que escolha uma
delas. Em seguida, peça dois números e realize a operação escolhida.
*/

int main() {
    int opcao;
    double num1, num2;
    cout << "Quando você está acessando o sistema? \n";
    cout << "1) Adição \n"; 
    cout << "2) Subtração \n";
    cout << "3) Multiplicação \n";
    cout << "4) Divisão \n";
    cout << "R: ";
    cin >> opcao;
    switch (opcao) {
        case 1:
            cout << "\nInsira a primeira parcela: ";
            cin >> num1;
            cout << "Insira a segunda parcela: ";
            cin >> num2;
            cout << "\n" << num1<< " + "<< num2<< " = "<< (num1+num2);
            break;
        case 2:
            cout << "\nInsira o minuendo: ";
            cin >> num1;
            cout << "Insira o subtraendo: ";
            cin >> num2;
            cout << "\n" << num1<< " - "<< num2<< " = "<< (num1-num2);
            break;
        case 3:
            cout << "\nInsira o primeiro fator: ";
            cin >> num1;
            cout << "Insira o segundo fator: ";
            cin >> num2;
            cout << "\n" << num1 << " * "<< num2<< " = "<< (num1*num2);
            break;
        case 4:
            cout << "\nInsira o dividendo: ";
            cin >> num1;
            cout << "Insira o divisor: ";
            cin >> num2;
            cout << "\n" << num1<< " / "<< num2<< " = "<< (num1/num2);
            break;
        default:
            cout << "\nOpção inválida.";
            break;
    }

    return 0;
}