/*
 * ============================================================================
 * PROGRAMA: RESOLVEDOR DE EQUAÇÕES DO 2º GRAU
 * ============================================================================
 *
 * DESCRIÇÃO:
 * Este programa calcula as raízes de uma equação quadrática no formato:
 *                    ax² + bx + c = 0
 *
 * FÓRMULAS UTILIZADAS:
 * 1. Discriminante (Delta): Δ = b² - 4ac
 * 2. Raízes da equação: x = [-b ± √Δ] / (2a)
 *
 * CASOS POSSÍVEIS:
 *
 * 1. Se a = 0:
 *    → Não é uma equação do 2º grau
 *    → Programa encerra com mensagem de erro
 *
 * 2. Se Δ < 0:
 *    → Não existem raízes reais
 *    → As raízes são números complexos conjugados
 *
 * 3. Se Δ = 0:
 *    → Existe uma única raiz real (raiz dupla)
 *    → x = -b / (2a)
 *
 * 4. Se Δ > 0:
 *    → Existem duas raízes reais distintas
 *    → x₁ = [-b - √Δ] / (2a)
 *    → x₂ = [-b + √Δ] / (2a)
 *
 * EXEMPLOS DE EQUAÇÕES:
 *
 * 1) Duas raízes reais: x² - 5x + 6 = 0
 *    → a=1, b=-5, c=6
 *    → Δ = 1, x₁=2, x₂=3
 *
 * 2) Raiz única: x² - 4x + 4 = 0
 *    → a=1, b=-4, c=4
 *    → Δ = 0, x=2
 *
 * 3) Sem raízes reais: x² + 2x + 5 = 0
 *    → a=1, b=2, c=5
 *    → Δ = -16
 *
 * ALGORITMO:
 * 1. Ler coeficientes a, b, c
 * 2. Verificar se a ≠ 0
 * 3. Calcular Δ = b² - 4ac
 * 4. Classificar Δ e calcular raízes conforme os casos acima
 * 5. Exibir resultados formatados
 *
 * ENTRADA: Três números reais (coeficientes a, b, c)
 * SAÍDA: Valor de Δ e raízes da equação (se existirem)
 *
 * AUTOR: @Joseph
 * ============================================================================
 */

#include <iostream>
#include <cmath>
#include <locale>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setprecision;
using std::fixed;

int main(){
    setlocale(LC_ALL, "Portuguese");

    double a, b, c;                 // os coeficientes
    double delta;
    double x1, x2;                  // as raizes

    cout << "Insira os coeficientes da equação do segundo grau" << endl;
    cout << "a: ";
    cin >> a;
    if(a == 0){
        cout << "ERRO. O coeficiente 'a' não pode ser zero. " << endl;
        cout << "Não é uma equação do 2 grau." << endl;
        return 1;
    }
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    cout << fixed << setprecision(2);

    cout << "\nA equação: " << a << "x² ";

    if(b >= 0){
        cout << "+ " << b << "x ";
    }
    else{
        cout << "- " << -b << "x ";
    }

    if(c >= 0){
        cout << "+ " << c;
    }
    else{
        cout << "- " << -c;
    }

    cout << " =  0" << endl;

    delta = pow(b,2) - (4 * a * c);

    if(delta < 0){
        cout << "Delta = " << delta << endl;
        cout << "Não existem raízes reais." << endl;
        cout << "As raízes são complexas.";
    }
    else if (delta == 0){
        cout << "Delta = " << delta << endl;
        cout << "Há uma única raíz real." << endl;
        x1 = (- b - sqrt(delta))/(2*a);
        cout << "A raiz x = " << x1 << endl;
    }
    else{
        cout << "Delta = " << delta << endl;
        cout << "Há duas raízes reais." << endl;
        x1 = (- b - sqrt(delta))/(2*a);
        x2 = (- b + sqrt(delta))/(2*a);
        cout << "A raiz x1 = " << x1 << endl;
        cout << "A raiz x2 = " << x2 << endl;
    }
    return 0;


}
