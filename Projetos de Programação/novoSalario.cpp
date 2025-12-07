/*Os trabalhadores de uma empresa em particular receberam um aumento de 7,6% retroativo a seis meses. Es
creva um programa que tome o salário anual anterior de um empregado como entrada e apresente como saída
a quantidade de pagamento retroativo devido ao empregado, o novo salário anual e o novo salário mensal.
Utilize uma declaração de variável com o modificador const para expressar o aumento de pagamento.*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    float salarioAnualAnterior;
    float salarioMensalAnterior;
    float salarioAnualAtual;
    float salarioMensalAtual;
    float pagamentoRetroativo;

    const float aumentoRetroativo = 1.076;
    const int meses_retroativos = 6;


    cout << "Digite seu salario anual anterior: \n" << endl;
    cin >> salarioAnualAnterior;

    salarioMensalAnterior = salarioAnualAnterior/12;
    salarioMensalAtual = salarioMensalAnterior * aumentoRetroativo;
    salarioAnualAtual = salarioMensalAtual * 12;
    pagamentoRetroativo = (salarioMensalAtual - salarioMensalAnterior) * meses_retroativos;

    cout << "Salario Anual atual: \n" << salarioAnualAtual << endl;
    cout << "Salario Mensal atual: \n" << salarioMensalAtual << endl;
    cout << "Aumento do Pagamento:  \n" << pagamentoRetroativo << endl;

    return 0;


}
