#include <iostream>
using namespace std;

/*
h) Criar um algoritmo que leia o preço de compra e o preço de venda de 100
mercadorias. O algoritmo devera imprimir quantas mercadorias
proporcionam:
▪ lucro < 10 %
▪ % <= lucro <= 20 %
▪ lucro > 20 %
*/

int main() {

    double precoDeCompra[100], precoDeVenda[100];
    int cont1 = 0, cont2 = 0, cont3 = 0;

    for(int i = 0; i<100; i++) {
        cout << "Produto " << (i+1) << ":\n";
        cout << "Preço de compra: ";
        cin >> precoDeCompra[i];
        cout << "Preço de venda: ";
        cin >> precoDeVenda[i];

        if (precoDeVenda[i] < (precoDeCompra[i]*1.10)) {
            cont1++;
        } else if (precoDeVenda[i] <= (precoDeCompra[i]*1.20)) {
            cont2++;
        } else {
            cont3++;
        }
    }

    cout << "Produtos que proporciam lucro...";
    cout << "\nmenor que 10%: " << cont1;
    cout << "\nentre 10% e 20%: " << cont2;
    cout << "\nmaior que 20%: " << cont3;  

    return 0;
}