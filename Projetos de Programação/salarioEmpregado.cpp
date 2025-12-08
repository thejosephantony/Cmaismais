/*Um empregado recebe R$ 16,78 por horas regulares trabalhadas em uma semana. Se esse empregado fizer
hora extra, deve receber essa mesma taxa multiplicada por 1,5. Do pagamento bruto do empregado, 6%
são retidos pela Previdência Social, 14%, pelo Imposto de Renda Federal, 5%, por impostos estaduais, e R$
10 por semana, para o Sindicato. Se o empregado tiver três ou mais dependentes, um adicional de R$ 35 é re
tido para cobrir o custo extra do seguro de saúde. Escreva um programa que leia o número de horas trabalha
das em uma semana e o número de dependentes como entrada e apresente como saída o pagamento bruto do
empregado, o valor de cada imposto retido e o salário líquido por semana.*/

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int horasTrabalhadas;
    int numDependentes;

    const double horasFixasSemana = 40.00;
    const double salarioPorHora = 16.78;
    const double taxaPrevidencia = 0.06;
    const double impostoRendaFederal = 0.14;
    const double impostosEstaduais = 0.05;

    const double sindicatoSemana = 10.00;

    double pagamentoBruto;
    double horasNormais;
    double horasExtras;
    double impostoRetidoPrevidencia;
    double impostoRetidoRendaFederal;
    double impostoRetidoImpostoEstadual;

    double impostoRetidoTotal;
    double salarioLiquido;

    cout << "Quantas horas trabalhou na semana?" << endl;
    cin >> horasTrabalhadas;

    cout << "Quantos dependentes possui?" << endl;
    cin >> numDependentes;

    cout << std::fixed << std::setprecision(2) << endl;

    if (horasTrabalhadas <= 40) {
        horasNormais = horasTrabalhadas;
        horasExtras = 0;
    }
    else{
        horasNormais = 40;
        horasExtras = horasTrabalhadas - horasNormais;
    }

    pagamentoBruto = (salarioPorHora * horasTrabalhadas) + (salarioPorHora * 1.5 * horasExtras);
    impostoRetidoImpostoEstadual = (pagamentoBruto * impostosEstaduais);
    impostoRetidoPrevidencia = (pagamentoBruto * taxaPrevidencia);
    impostoRetidoRendaFederal = (pagamentoBruto * impostoRendaFederal);
    impostoRetidoTotal =(impostoRetidoPrevidencia) + (impostoRetidoRendaFederal) + (impostoRetidoImpostoEstadual);

    if (numDependentes >= 3){
        salarioLiquido = pagamentoBruto - impostoRetidoTotal - sindicatoSemana - 35.0;
        cout << "Pagamento bruto: R$" << pagamentoBruto << endl;
        cout << "Imposto Estadual: R$" << impostoRetidoImpostoEstadual << endl;
        cout << "Imposto de Renda Federal: R$" << impostoRetidoRendaFederal << endl;
        cout << "Imposto da Previdencia: R$" << impostoRetidoPrevidencia << endl;
        cout << "Salario Liquido: R$" << salarioLiquido << endl;
    }
    else{
        salarioLiquido = pagamentoBruto - impostoRetidoTotal - sindicatoSemana;
        cout << "Pagamento bruto: R$" << pagamentoBruto << endl;
        cout << "Imposto Estadual: R$" << impostoRetidoImpostoEstadual << endl;
        cout << "Imposto de Renda Federal: R$" << impostoRetidoRendaFederal << endl;
        cout << "Imposto da Previdencia: R$" << impostoRetidoPrevidencia << endl;
        cout << "Salario Liquido: R$" << salarioLiquido << endl;
    }
    return 0;

}
