/*Calculadora de limite de crédito. Desenvolva um
programa em C que determine se um cliente de uma
loja de departamentos excedeu seu limite de crédito. Os
seguintes fatos estão disponíveis para cada cliente:
a) Número de conta.
b) Saldo no início do mês.
c) Total de todos os encargos desse cliente nesse mês.
d) Total de todos os créditos aplicados à conta desse
cliente nesse mês.
e) Limite de crédito autorizado

O programa deverá ler cada um desses fatos, calcular o
novo saldo (= saldo inicial + encargos - créditos)
e determinar se o novo saldo é superior ao limite de
crédito do cliente. Para os clientes cujo limite de crédi
to foi ultrapassado, o programa deverá exibir o número
de conta do cliente, o limite de crédito, o novo saldo e
a mensagem ‘Limite de crédito ultrapassado’.*/

#include <iostream>
#include <iomanip>
#include <locale>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

int main(){
    setlocale(LC_ALL, "Portuguese");

    int numeroConta;
    double saldoInicioMes;
    double totalEncargos;
    double totalCreditos;
    double limiteAutorizado;
    double novoSaldo;

    cout << fixed << setprecision(2);
    while(true){
        cout << "Entre com o numero da conta (-1 para terminar): ";
        cin >> numeroConta;

        if(numeroConta == -1){
            break;
        }
        if(numeroConta <= 0){
            cout << "ERRO. O número da conta deve ser positivo." << endl;
            continue;
        }
        cout << "Entre com o saldo inicial: ";
        cin >> saldoInicioMes;

        cout << "Informe o total de encargos: ";
        cin >> totalEncargos;

        if(totalEncargos < 0){
            cout << "ERRO. O total de encargos deve ser positivo" << endl;
            continue;
        }

        cout << "Informe o total de créditos: ";
        cin >> totalCreditos;

        if(totalCreditos < 0){
            cout << "ERRO. O total de créditos deve ser positivo" << endl;
            continue;
        }

        cout << "Informe o limite de crédito: ";
        cin >> limiteAutorizado;

        if(limiteAutorizado < 0){
            cout << "ERRO. O limite autorizado deve ser maior que zero." << endl;
            continue;
        }
        novoSaldo = saldoInicioMes + totalEncargos - totalCreditos;

        if(novoSaldo > limiteAutorizado){
            cout << "Conta: " << numeroConta << endl;
            cout << "Limite de crédito: " << limiteAutorizado << endl;
            cout << "Saldo: " << novoSaldo << endl;
            cout << "Limite de crédito ultrapassado." << endl;
        }
    }
    return 0;
}
