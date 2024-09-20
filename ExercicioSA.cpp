#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

/*

Exercicio SA

Faça um programa para o cálculo de uma folha de pagamento, sabendo que os
descontos são do Imposto de Renda, que depende do salário bruto (conforme
tabela abaixo) e 10% para o INSS e que o FGTS corresponde a 11% do Salário
Bruto, mas não é descontado (é a empresa que deposita).

O Salário Líquido corresponde ao Salário Bruto menos os descontos. O
programa deverá pedir ao usuário o valor da sua hora e a quantidade de horas
trabalhadas no mês.

Desconto do IR: Salário Bruto até 900 (inclusive) - isento Salário Bruto até 1500
(inclusive) - desconto de 5% Salário Bruto até 2500 (inclusive) - desconto de
10% Salário Bruto acima de 2500 - desconto de 20%

Imprima na tela as informações, dispostas conforme o exemplo abaixo. No
exemplo o valor da hora é 5 e a quantidade de hora é 220.
Salário Bruto: (5 * 220) : R$ 1100,00
(-) IR (5%) : R$ 55,00
(-) INSS ( 10%) : R$ 110,00
FGTS (11%) : R$ 121,00
Total de descontos : R$ 165,00
Salário Liquido : R$ 935,00

*/

int main() {
    
    double salarioHora, salarioBruto, salarioLiquido, IR, FGTS, INSS, descontoTotal, porcentagemIR;
    int horasTrabalhadas;
    cout << "Insira o valor do salário-hora: ";
    cin >> salarioHora;
    cout << "Insira a quantidade de horas trabalhadas: ";
    cin >> horasTrabalhadas;
    cout << "\n";
    
    salarioBruto = salarioHora*horasTrabalhadas;
    porcentagemIR = ((salarioBruto <= 900) ? 0 : ((salarioBruto <= 1500) ? 0.05 : ((salarioBruto <= 2500) ? 0.10 : 0.20 )));
    IR = salarioBruto * porcentagemIR;
    INSS = salarioBruto*0.10;
    FGTS = salarioBruto*0.11;
    
    descontoTotal = IR + INSS;
    salarioLiquido = salarioBruto - descontoTotal;
    
    cout << "Salário Bruto: (" << salarioHora << " * " << horasTrabalhadas << ") : R$ " << fixed << setprecision(2) << salarioBruto << "\n";
    cout << "(-) IR (" << fixed << setprecision(0) << porcentagemIR*100 << "%) : R$ " << fixed << setprecision(2) << IR << "\n";
    cout << "(-) INSS (10%) : R$ " << fixed << setprecision(2) << INSS << "\n";
    cout << "FGTS (11%) : R$ " << fixed << setprecision(2) << FGTS << "\n";
    cout << "Total de descontos : R$ " << fixed << setprecision(2) << descontoTotal << "\n";
    cout << "Salário líquido : R$ " << fixed << setprecision(2) << salarioLiquido;
    
}