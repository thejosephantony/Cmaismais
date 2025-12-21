/* Fac¸a um algoritmo que calcule a m´ edia ponderada das notas de 3 provas. A primeira e
a segunda prova tˆ em peso 1 e a terceira tem peso 2. Ao final, mostrar a m´ edia do aluno
e indicar se o aluno foi aprovado ou reprovado. A nota para aprovac¸˜ ao deve ser igual ou
superior a 60 pontos.*/

#include <iostream>
#include <iomanip>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

int main(){
    double n1;
    double n2;
    double n3;
    double media;

    const double peso1 = 1.00;
    const double peso2 = 2.00;

    cout << "Digite as tres notas: " << endl;
    cin >> n1 >> n2 >> n3;

    media = (n1 * peso1 + n2 * peso1 + n3 * peso2)/(peso1+ peso1 + peso2);

    cout << fixed << setprecision(2);

    if (media >= 60.0){
        cout << "Media = " << media << endl;
        cout << "APROVADO!" << endl;
    }
    else{
        cout << "Media = " << media << endl;
        cout << "REPROVADO!" << endl;
    }
    return 0;
}
