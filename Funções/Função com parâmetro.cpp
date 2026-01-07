#include <iostream>
#include <locale>

using namespace std;

int soma(int a, int b){
    return a + b;
}
int subtracao(int a, int b){
    return a - b;
}
int multiplicacao(int a, int b){
    return a * b;
}
double divisao(double a, double b){
    if(b == 0){
        return 0; // valor neutro
    }
    return a / b;
}



int main(){
    setlocale(LC_ALL, "Portuguese");
    int num1, num2;

    cout << "Informe dois números: ";
    cin >> num1 >> num2;

    cout << "Soma = " << soma(num1, num2) << endl;
    cout << "Subtracao = " << subtracao(num1, num2) << endl;
    cout << "Multiplicação = " << multiplicacao(num1, num2) << endl;

    if(num2 == 0){
    cout << "ERRO. Não existe divisão por zero" << endl;
    } else{
    cout << "Divisão = " << divisao(num1, num2) << endl;
    }

    return 0;

}
