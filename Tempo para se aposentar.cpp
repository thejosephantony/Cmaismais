/*Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou n˜ao se
aposentar. As condicões para aposentadoria s˜ão
• Ter pelo menos 65 anos,
• Ou ter trabalhado pelo menos 30 anos,
• Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos*/

#include <iostream>
#include <iomanip>
#include <locale>

using std::cout;
using std::cin;
using std::endl;

int main(){
    setlocale(LC_ALL, "Portuguese");
    int idade;
    int tempoServico;

    cout << "Qual a sua idade? ";
    cin >> idade;

    cout << "Qual o seu tempo de contribuição? ";
    cin >> tempoServico;

    if(idade >= 65){
        cout << "Pode se aposentar." << endl;
    }
    else if(tempoServico >= 30){
        cout << "Pode se aposentar." << endl;
    }
    else if(idade >= 60 && tempoServico >= 25){
        cout << "Pode se aposentar." << endl;
    }
    else{
        cout << "Não pode se aposentar." << endl;
    }
    return 0;

}
