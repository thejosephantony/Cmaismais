/* Leia o salario de um trabalhador e o valor da prestacao de um emprestimo. Se a
prestacao for maior que 20% do salario imprima: Emprestimo nao concedido, caso
contrario imprima: Emprestimo concedido.*/

#include <iostream>
#include <iomanip>


using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

int main(){
    double salario;
    double valorPrestacao;

    cout << "Qual o seu salario? " << endl;
    cin >> salario;

    cout << "Qual o valor da prestacao? " << endl;
    cin >> valorPrestacao;

    if(valorPrestacao > (1.20 * salario)){
        cout << "Emprestimo nao concedido" << endl;
    }
    else{
        cout << "Emprestimo concedido." << endl;
    }
    return 0;

}

