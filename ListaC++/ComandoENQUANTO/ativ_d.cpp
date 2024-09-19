#include <iostream>
#include <string>
using namespace std;

/*
d) Desenvolva um programa que solicite ao usuário para inserir uma senha e,
em seguida, permita que o usuário tente inserir a senha até três vezes. Caso o
usuário acerte a senha, exiba uma mensagem de sucesso. Caso contrário,
exiba uma mensagem informando que a senha está incorreta.
*/

int main() {
    int tentativa = 1;
    string senhaInserida, senha = "senha";
    while (tentativa<=3) {
        if (tentativa>1) {
            cout << "\nSenha incorrreta! Tente novamente.\n";
        }
        cout << "Insira a senha: ";
        cin >> senhaInserida;
        if (senha.compare(senhaInserida)==0) {
            cout << "\nAcesso permitido";
            return 0;
        }
        tentativa++;
    }
    cout << "Acesso bloqueado";
    return 0;
}