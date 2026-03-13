/*Escreva uma função qualityPoints que insere a média de um aluno e retorna 4 se a média do aluno for 90–100, 3 se a média for 80–89,
2 se a média for 70–79, 1 se a média for 60–69 e 0 se a média for mais baixa que 60.*/


#include <iostream>
#include <locale>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;


int qualityPoints(double media){
    if((media >= 90.0) && (media <= 100.0)){
        return 4;  // retorna 4;
    }
    else if((media >= 80.0 && (media <= 89.0))){
        return 3; // retorna 3
    }
    else if((media >= 70.0) && (media <= 79.0)){
        return 2; // retorna 2
    }
    else if((media >= 60.0) && (media <= 69.0)){
        return 1; // retorna 1
    }
    else{
        return 0; // retorna 0
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    double m;

    cout << "Insira sua média: ";
    cin >> m;

    if((m < 0) || (m > 100)){
        cout << "Média inválida" << endl;
    }

    cout << "Quality Points: " << qualityPoints(m) << endl;
    return 0;

}


