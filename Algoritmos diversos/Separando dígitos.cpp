/*Escreva segmentos de programa que realizam cada uma das seguintes instruções:
a) Calcule a parte inteira do quociente quando o inteiro a é dividido pelo inteiro b.
b) Calcule o resto inteiro quando o inteiro a é dividido pelo inteiro b.
c) Utilize as partes do programa desenvolvido em (a) e (b) para escrever uma função que insere um inteiro entre 1 e 32767 e o imprime
como uma série de dígitos, do qual cada par é separado por dois espaços. Por exemplo, o inteiro 4562 deve ser impresso da seguinte
maneira:
4  5  6  2*/


#include <iostream>
#include <locale>

using std::cout;
using std::cin;
using std::endl;

int quociente(int a, int b){
    return a/b;
}

int resto(int a, int b){
    return a % b;
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num;

    while(true){

    cout << "Insira um número inteiro entre [1-32767] (digite 0 para encerrar): ";
    cin >> num;

    if(num == 0){
        cout << "Programa encerrado." << endl;
        break;
    }

    if(num < 0 || num > 32767){
        cout << "ERRO. Número inválido.";
        continue;
    }

    if(num >= 1 && num <= 9){
        cout << num << endl;
    }

    if(num >= 10 && num <= 99){
        int unidade = resto(num, 10);
        int dezena = quociente(num, 10);
        cout << num << " = " << dezena << "  " << unidade << endl;
    }
    else if(num >= 100 && num <= 999){
        int unidade = resto(num, 10);
        int dezena = quociente(resto(num, 100), 10);
        int centena = quociente(num, 100);
        cout << num << " = " << centena << "  " << dezena << "  " << unidade <<  endl;

    }
    else if(num >= 1000 && num <= 9999){
        int unidade = resto(num, 10);
        int dezena = quociente(resto(num, 100), 10);
        int centena = quociente(resto(num, 1000), 100);
        int unidade_milhar = quociente(num, 1000);
        cout << num << " = " << unidade_milhar << "  " << centena << "  " << dezena << "  " << unidade <<  endl;

    }
    else{
        int unidade = resto(num, 10);
        int dezena = quociente(resto(num, 100), 10);
        int centena = quociente(resto(num, 1000), 100);
        int unidade_milhar = quociente(resto(num, 10000), 1000);
        int dezena_milhar = quociente(num, 10000);
        cout << num << " = " << dezena_milhar << "  " << unidade_milhar << "  " << centena << "  " << dezena << "  " << unidade <<  endl;
    }

    }
    return 0;

}
