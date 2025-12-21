 /*Anota final de umestudante ´ e calculada a partir de trˆ es notas atribu´ ıdas entre o intervalo
de 0 at´ e 10, respectivamente, a um trabalho de laborat´ orio, a uma avaliac¸˜ ao semestral
e a um exame final. A m´ edia das trˆ es notas mencionadas anteriormente obedece aos
pesos: Trabalho de Laborat´ orio: 2; Avaliac¸˜ ao Semestral: 3; Exame Final: 5. De acordo
com o resultado, mostre na tela se o aluno est´ a reprovado (m´ edia entre 0 e 2,9), de
recuperac¸˜ ao (entre 3 e 4,9) ou se foi aprovado. Fac¸a todas as verificac¸˜ oes necess´ arias.*/

#include <iostream>
#include <iomanip>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

int main(){
    double trabalhoLaboratorio;
    double avaliacaoSemestral;
    double exameFinal;
    double media;

    const double peso1 = 2.00;              // peso do trabalho do lab
    const double peso2 = 3.00;              // peso da avaliacao semestral
    const double peso3 = 5.00;               // peso do exame final

    cout << "Insira a nota do trabalho no laboratorio: ";
    cin >> trabalhoLaboratorio;

    cout << "Insira a nota da avaliacao semestral: ";
    cin >> avaliacaoSemestral;

    cout << "Insira a nota do exame final: ";
    cin >> exameFinal;

    cout << fixed << setprecision(2);

    media = (trabalhoLaboratorio * peso1 + avaliacaoSemestral * peso2 + exameFinal * peso3)/(peso1 + peso2 + peso3);

    if((0.0 <= trabalhoLaboratorio && trabalhoLaboratorio <= 10.0) && (0.0 <= exameFinal && exameFinal <= 10.0) && (0.0 <= avaliacaoSemestral && avaliacaoSemestral <= 10.0)){
        if(media >= 0.0 && media <= 2.9){
                cout << "MEDIA = " << media << endl;
                cout << "REPROVADO!" << endl;}
        else if(media >= 3.0 && media <= 4.9){
            cout << "MEDIA = " << media << endl;
            cout << "RECUPERACAO!" << endl;
        }
        else{
            cout << "MEDIA = " << media << endl;
            cout << "APROVADO!" << endl;
        }
        }
    else{
        cout << "Notas invalidas." << endl;
    }
    return 0;

}
