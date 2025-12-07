/* Um laboratório de pesquisas governamental conclui que um adoçante artificial comumente usado em re
frigerantes dietéticos causa a morte de ratos de laboratório. Um amigo seu está desesperado para perder
peso e não consegue deixar de tomar refrigerantes. Seu amigo quer saber quanto refrigerante dietético é
possível tomar sem morrer. Escreva um programa para dar essa resposta. Os dados de entrada serão a
quantidade de adoçante artificial necessária para matar um rato, o peso do rato e o peso da pessoa em
dieta. Para garantir a segurança do seu amigo, faça com que o programa requisite o peso com o qual ele
deseja ficar, em vez do peso atual. Assuma que o refrigerante dietético contém um décimo de 1% de ado
çante artificial. Utilize uma declaração de variável com o modificador const para dar um nome a esta fra
ção. Você pode querer expressar a porcentagem como o valor double 0.001.*/


#include <iostream>

using std::cin;
using std::cout;
using std::endl;


int main(){
   double qtdAdocante;             // qtd aqui é para matar o rato
   double pesoRato;
   double pesodesejadoPessoa;
   double adocance_letal_pessoa;
   double refrigerante_letal;

   const double adocante_porcentagem = 0.001;

   cout << "---- CALCULADORA DE REFRIGERANTE DIATETICO ----- \n" << endl;

   cout << "Qual a quantidade de adocante artificial necessaria para matar um rato? \n" << endl;
   cin >> qtdAdocante;


   cout << "Qual o peso do rato? (em gramas) \n" << endl;
   cin >> pesoRato;

   cout << "Qual o peso desejado da pessoa? (em quilos)\n" << endl;
   cin >> pesodesejadoPessoa;

   double pesodesejadoPessoa_gramas = pesodesejadoPessoa * 1000;

   adocance_letal_pessoa = (qtdAdocante/pesoRato) * pesodesejadoPessoa_gramas;

   refrigerante_letal = adocance_letal_pessoa/adocante_porcentagem;

   cout << "----RESULTADOS----\n" << endl;
   cout << "Quantidade letal de adocante para uma pessoa de "
         << pesodesejadoPessoa << " kg: "
         << adocance_letal_pessoa << " gramas" << endl;

    cout << "Quantidade letal de refrigerante dietetico: "
         << refrigerante_letal << " gramas" << endl;

    cout << "Equivalente a: " << refrigerante_letal / 1000 << " litros" << endl;

    cout << "Equivalente a: " << refrigerante_letal / 350 << " latas de 350ml" << endl;

    return 0;
}


