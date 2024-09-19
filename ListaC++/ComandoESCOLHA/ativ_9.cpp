#include <iostream>
#include <string>
using namespace std;

/*
9. Faça um programa que apresente um menu com as opções de meses do ano (janeiro a
dezembro) e solicite ao usuário que escolha um mês. Em seguida, exiba uma
mensagem informando a quantidade de dias do mês escolhido.
*/

int main () {
    string meses[12] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    int diasQuant[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int escolha;

    cout << "Escolha um mês: \n\n";
    for (int i = 0; i <12; i++) {
        cout << i+1 << ") " << meses[i] << "\n";
    }
    cout << "\nEscolha: ";
    cin >> escolha;
    switch (escolha) {
        case 1:
    	    cout << "O mês escolhido tem " << diasQuant[1] << " dias.";
            break;
        case 2:
    	    cout << "O mês escolhido tem " << diasQuant[2] << " dias.";
            break;
        case 3:
    	    cout << "O mês escolhido tem " << diasQuant[3] << " dias.";
            break;
        case 4:
    	    cout << "O mês escolhido tem " << diasQuant[4] << " dias.";
            break;
        case 5:
    	    cout << "O mês escolhido tem " << diasQuant[5] << " dias.";
            break;
        case 6:
    	    cout << "O mês escolhido tem " << diasQuant[6] << " dias.";
            break;
        case 7:
    	    cout << "O mês escolhido tem " << diasQuant[7] << " dias.";
            break;
        case 8:
    	    cout << "O mês escolhido tem " << diasQuant[8] << " dias.";
            break;
        case 9:
    	    cout << "O mês escolhido tem " << diasQuant[9] << " dias.";
            break;
        case 10:
    	    cout << "O mês escolhido tem " << diasQuant[10] << " dias.";
            break;
        case 11:
    	    cout << "O mês escolhido tem " << diasQuant[11] << " dias.";
            break;
        case 12:
    	    cout << "O mês escolhido tem " << diasQuant[12] << " dias.";
            break;
        default:
            cout << "Opção inválida>";
            break;
    }
    return 0;
}