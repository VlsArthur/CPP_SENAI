#include <iostream>
using namespace std;

/*
i) Criar um algoritmo para gerenciar um sistema de reservas de mesas em uma
casa de espetáculo. A casa possui 30 mesas de 5 lugares cada. O algoritmo
deverá permitir que o usuário escolha código de uma mesa (100 a 129) e
forneça a quantidade de lugares desejados. O algoritmo deverá informar se
foi possível realizara reserva e atualizar a reserva. Se não for possível, o
algoritmo deverá emitir uma mensagem. O algoritmo deve terminar quando
o usuário digitar o código O (zero) para uma mesa ou quando todos os 150
lugares estiverem ocupados.
*/

int main() {
  
    int totalLugares = 0;
    int reservaMesa;
    int reservaLugares;
    int mesas[30];

    for (int i = 0; i < 30; i++) {
      mesas[i] = 5;
    }

    do {
      cout << "\nDigite o código da mesa em que deseja fazer a reserva: ";
      cin >> reservaMesa;
      if (reservaMesa == 0) {
        return 0;
      }
      cout << "\nDigite a quantidade de lugares que deseja reservar: ";
      cin >> reservaLugares;

      if (reservaMesa < 100 || reservaMesa > 129) {
        cout << "\nCódigo de mesa inválido!";
      } else {
        if (reservaLugares <=0) {
          cout << "\nInsira uma quantidade de lugares válida.";
        } else if (reservaLugares > mesas[reservaMesa - 100]) {
        cout << "\nImpossível efetuar reserva. Lugares disponíveis na mesa " << reservaMesa << ": " << mesas[reservaMesa - 100];
        } else {
        cout << "\nReserva efetuada com sucesso.";
        mesas[reservaMesa - 100] -= reservaLugares;
        }
        for (int i = 0; i < 30; i++) {
          totalLugares += mesas[i];
        }
      }
    } while (totalLugares > 0);

    if (totalLugares==0) {
      cout << "\nLugares esgotados.";
    }

    return 0;
}