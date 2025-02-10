#include <iostream>
#include <iomanip>  // Incluindo a biblioteca necessária para formatação
#include <cmath>    // Biblioteca para funções matemáticas, como pow()

using namespace std;

int main(){
    // Declaração de variáveis
    int a, b, c, maiorAB, maior;

    // Leitura da entrada
    cin >> a >> b >> c;

    // Cálculo de area do maior
    maiorAB = (a + b + abs(a-b)) / 2; // calculo do mamior entre ab como o enunciado fala
    maior = (maiorAB + c + abs(maiorAB - c)) / 2; //calculo extra apenas para incluir o c, logo ele faz o calculo com o valor anterior

    // Exibição do resultado
    cout << maior << " eh o maior" << endl;

    return 0;
}
