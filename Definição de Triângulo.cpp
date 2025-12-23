/* Dados tres valores, A, B, C, verificar se eles podem ser valores dos lados de um triangulo
e, se forem, se e um triangulo escaleno, equilatero ou isosceles, considerando os seguintes conceitos:
• O comprimento de cada lado de um triangulo e menor do que a soma dos outros dois lados.
• Chama-se equilatero o triangulo que tem tres lados iguais.
• Denominam-se isosceles o triangulo que tem o comprimento de dois lados iguais.
• Recebe o nome de escaleno o triangulo que tem os tres lados diferentes.*/

#include <iostream>
#include <locale>

using std::cin;
using std::cout;
using std::endl;


int main(){
    setlocale(LC_ALL, "Portuguese");

    int A, B, C;

    cout << "Insira três valores que correspondam ao lados do triângulo (A,B,C), respectivamente: ";
    cin >> A >> B >> C;

    if(A > 0 && B > 0 && C > 0 && A < B + C && B < A + C && C < A + B){
        if(A == B && B == C){
            cout << "É um triângulo equilátero." << endl;
        }
        else if(A == B || A == C || B == C){
            cout << "É um triângulo isósceles." << endl;
        }
        else{
            cout << "É um triângulo escaleno." << endl;
        }
    }
    else{
        cout << "Os valores (A, B, C) não correspodem aos lados de um triângulo." << endl;
    }

    return 0;
}
