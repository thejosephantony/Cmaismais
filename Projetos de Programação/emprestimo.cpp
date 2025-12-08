/*Nem sempre é fácil negociar um empréstimo ao consumidor. Uma forma de empréstimo é com abati
mento nas prestações, que funciona da seguinte forma: suponha que um empréstimo tenha um valor no
minal de R$ 1.000, taxa de juros de 15% e duração de 18 meses. O juro é calculado multiplicando-se o
valor nominal de R$ 1.000 por 0,15, o que dá R$ 150. Essa cifra é então multiplicada pelo período do
empréstimo de 1,5 anos, resultando em R$ 225 como o total de juros devidos. Essa quantia é imediata
mente deduzida do valor nominal, deixando o consumidor apenas com R$ 775. O reembolso é feito em
prestações iguais com base no valor nominal. Assim, o pagamento mensal do empréstimo será R$ 1.000
dividido por 18, que dá R$ 55,56. Escreva um programa que necessitará de três dados de entrada: a
quantia que o consumidor precisa receber, a taxa de juros e a duração do empréstimo em meses. O pro
grama deve, então, calcular o valor nominal requerido para que o consumidor receba a quantidade neces
sária. Deve também calcular o pagamento mensal.*/

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

int main(){

    double quantia;
    double taxaJuros;
    int tempo;

    double JurosDevidos;
    double valorNominal;
    double pagamentoMensal;

    cout << "Informe a quantia desejada do emprestimo.\n" << endl;
    cin >> quantia;
    cout << "Qual a taxa de juros?\n" << endl;
    cin >> taxaJuros;
    cout << "Qual a duracao do emprestimo? (em meses)\n" << endl;
    cin >> tempo;

    cout << std::fixed << std::setprecision(2) << endl;

    valorNominal = quantia/ (1 - (taxaJuros/100) * tempo/12.0);
    JurosDevidos = (valorNominal * taxaJuros/100.0) * tempo/12.0;
    pagamentoMensal = valorNominal/tempo;

    cout << "Juros devidos: R$" << JurosDevidos << endl;
    cout << "Valor nominal: R$" << valorNominal << endl;
    cout << "Pagamento mensal: R$" << pagamentoMensal << endl;

    return 0;
}
