/*Calculando limites de crédito. Poupar dinheiro
vem se tornando algo cada vez mais difícil de se fazer
durante períodos de recessão, de modo que as empresas
podem estreitar seus limites de crédito para impedir que
suas contas a receber (dinheiro devido a elas) se tornem
muito grandes. Em resposta a uma recessão prolonga
da, uma empresa cortou os limites de crédito de seus
clientes pela metade. Assim, se um cliente em particu
lar tinha um limite de crédito de R$ 2.000,00, agora
ele é de R$ 1.000,00. Se um cliente tinha um limite de
R$ 5.000,00, agora ele é de R$ 2.500,00. Escreva um
programa que analise o status de crédito de três clientes
dessa empresa. Você receberá as seguintes informações:
a) O número de conta do cliente.
b) O limite de crédito do cliente antes da recessão.
c) O saldo atual do cliente (ou seja, o valor que o clien
te deve à empresa).
Seu programa deve calcular e imprimir o novo limite de
crédito para cada cliente e deve determinar (e imprimir)
quais clientes têm saldo atual superior a seus novos limi
tes de crédito.*/


#include <iostream>
#include <cmath>
#include <locale>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;


int main(){
    setlocale(LC_ALL, "Portuguese");

    int numeroConta;
    double limite;
    double saldoAtual;
    double novoLimite;

    cout << fixed << setprecision(2);

    for(int i = 1; i <= 3; i++){
        cout << "\nCliente " << i << endl;

        cout << "Informe o número da sua conta: ";
        cin >> numeroConta;

        if(numeroConta <= 0){
            cout << "ERRO. O número da conta deve ser positivo." << endl;
            i--;
            continue;
        }

        cout << "Informe seu limite antes da recessão: R$";
        cin >> limite;

        if(limite <= 0){
            cout << "ERRO. O limite deve ser positivo." << endl;
            i--;
            continue;
        }

        cout << "Informe seu saldo atual devedor: R$";
        cin >> saldoAtual;

        if(saldoAtual < 0){
            cout << "ERRO. O saldo atual deve ser positivo" << endl;
            i--;
            continue;
        }

        novoLimite = limite/2;

        cout << "Saldo atual: R$" << saldoAtual << endl;
        cout << "Novo limite: R$" << novoLimite << endl;
        if(saldoAtual > novoLimite){
            cout << "O saldo atual é superior ao limite" << endl;
        }
        else{
            cout << "O saldo atual dentro do limite do crédito" << endl;
        }
    }
    return 0;
}
