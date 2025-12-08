/*Escreva um programa que determine se uma sala de conferências está violando as normas legais de incên
dio relativas à sua capacidade máxima. O programa lerá a máxima capacidade da sala e o número de pes
soas que comparecerão à conferência. Se o número de pessoas for menor ou igual à capacidade máxima
da sala, o programa anuncia que a conferência está de acordo com as normas legais e diz quantas outras
pessoas poderão participar conforme essas normas. Se o número de pessoas exceder a capacidade máxima
da sala, o programa anuncia que a conferência não poderá ocorrer, devido às normas de incêndio, e diz
quantas pessoas devem ser excluídas a fim de obedecer às normas.*/

#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;

int main(){
    int capacidadeMaxima;
    int numPessoas;
    int lugaresRestantes;
    int lugaresExcedidos;

    cout << "Qual a capacidade máxima da sala?" << endl;
    cin >> capacidadeMaxima;

    cout << "Quantas pessoas comparecerão a conferência?" << endl;
    cin >> numPessoas;

    if (capacidadeMaxima >= numPessoas){
        lugaresRestantes = capacidadeMaxima - numPessoas;
        cout << "A conferência está de acordo com as normas legais\n" << endl;
        cout << "Faltam " << lugaresRestantes << " pessoas  para preencher a capacidade maxima.\n" << endl;
    }
    else{
        cout << "A conferência não pode ocorrer pois o número de pessoas excedeu a capacidade máxima da sala.\n" << endl;
        lugaresExcedidos = numPessoas - capacidadeMaxima;
        cout << "Precisam se retirar da sala " << lugaresExcedidos << " pessoas.\n" << endl;
    }
    return 0;

}

