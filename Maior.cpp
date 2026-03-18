/* Faça uma funcão que receba dois números e retorne qual deles é o maior.*/

#include <iostream>
#include <locale>

using std::cout;
using std::cin;
using std::endl;


double maiorNumero(double x, double y){
    if(x >= y){
        return x;
    }
    else{
        return y;
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    double num1;
    double num2;

    cout << "Informe dois números: ";
    cin >> num1 >> num2;

    if(num1 == num2){
        cout << "Os números são iguais." << endl;
        return 0;
    }
    else{
        cout << "O maior número é " << maiorNumero(num1, num2) << endl;
    }

    return 0;

}
