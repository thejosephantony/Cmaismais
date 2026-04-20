/*
 * ============================================================================
 * PROGRAMA: CALCULADORA DE MÉDIAS MATEMÁTICAS
 * ============================================================================
 *
 * DESCRIÇÃO:
 * Este programa calcula quatro tipos diferentes de médias para três números
 * inteiros positivos fornecidos pelo usuário:
 *
 * 1. MÉDIA ARITMÉTICA: Soma dos números dividida pela quantidade
 *    Fórmula: (x + y + z) / 3
 *
 * 2. MÉDIA PONDERADA: Soma dos números multiplicados por pesos específicos
 *    Fórmula: (1*x + 2*y + 3*z) / 6
 *    Pesos: x tem peso 1, y tem peso 2, z tem peso 3
 *
 * 3. MÉDIA GEOMÉTRICA: Raiz cúbica do produto dos números
 *    Fórmula: raiz cúbica de (x * y * z)
 *    Útil para calcular médias de taxas de crescimento
 *
 * 4. MÉDIA HARMÔNICA: Inverso da média aritmética dos inversos
 *    Fórmula: 3 / (1/x + 1/y + 1/z)
 *    Útil para calcular médias de velocidades ou taxas
 * FUNCIONAMENTO DO PROGRAMA:
 * 1. Solicita três números inteiros positivos (x, y, z)
 * 2. Valida se todos são positivos (maiores que zero)
 * 3. Calcula as quatro médias simultaneamente
 * 4. Exibe um menu interativo para o usuário escolher qual média ver
 * 5. Permite múltiplas consultas até o usuário escolher sair
 *
 * VALIDAÇÕES:
 * - Verifica se todos os números são positivos
 * - Verifica se a opção do menu é válida (0-4)
 * - Usa divisões decimais para evitar perda de precisão
 *
 * ENTRADAS:
 * - Três números inteiros positivos (x, y, z)
 * - Opção do menu (0-4)
 *
 * SAÍDAS:
 * - Mensagem de erro se números não forem positivos
 * - Menu interativo com as opções disponíveis
 * - Resultado da média selecionada formatado com 2 casas decimais
 *
 * EXEMPLOS DE USO:
 *
 * Entrada: x=2, y=3, z=6
 * Saídas:
 *   Média Aritmética: 3.67
 *   Média Ponderada: 4.33
 *   Média Geométrica: 3.30
 *   Média Harmônica: 3.00
 *
 * CASOS ESPECIAIS:
 * - Se algum número for <= 0: programa encerra com código de erro 1
 * - Se opção inválida no menu: exibe mensagem de erro e continua
 * - Opção 0: encerra o programa normalmente
 *
 *
 * AUTOR: [Joseph]
 * VERSÃO: 1.0
 * ============================================================================
 */

#include <iostream>
#include <locale>
#include <iomanip>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::setprecision;
using std::fixed;


int main(){
    setlocale(LC_ALL, "Portuguese");

    int x, y, z;
    double mediaAritmetica;
    double mediaPonderada;
    double mediaGeometrica;
    double mediaHarmonica;
    int opcao;

    cout << fixed << setprecision(2);

    cout << "Informe três números inteiros positivos: " << endl;
    cin >> x >> y >> z;

    if (x <= 0 || y <= 0 || z <= 0) {
        cout << "ERRO: Os números devem ser positivos!" << endl;
        return 1;
    }


    mediaAritmetica = (x+y+z)/3.0;
    mediaPonderada = (x*1.0 + y*2.0 + z*3.0)/6.0;
    mediaHarmonica = (3.0/(1.0/x + 1.0/y + 1.0/z));
    mediaGeometrica = pow(x*y*z, 1.0/3.0);

    do{
    cout << "--------------MENU--------------" << endl;
    cout << "Escolha uma das opções abaixo:  " << endl;
    cout << "1- Média Aritmética" << endl;
    cout << "2- Média Ponderada " << endl;
    cout << "3- Média Geométrica" << endl;
    cout << "4- Média Harmônica " << endl;
    cout << "0- Sair            " << endl;
    cin >> opcao;

    cout << "Numeros informados: " << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;

    switch(opcao){
        case 1:
            cout << "Média Aritmética = " << mediaAritmetica << endl;
            break;
        case 2:
            cout << "Média Ponderada =  " << mediaPonderada << endl;
            break;
        case 3:
            cout << "Média Geométrica = " << mediaGeometrica << endl;
            break;
        case 4:
            cout << "Média Harmônica = " << mediaHarmonica << endl;
            break;
        default:
            cout << "ERRO. Opção inválida." << endl;
    }

    }
    while(opcao!=0);
    return 0;

}
