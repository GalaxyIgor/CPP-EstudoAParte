#include <iostream>
#include <iomanip>  // Incluindo a biblioteca necessária para formatação
#include <cmath>    // Biblioteca para funções matemáticas, como pow()

using namespace std;

int main(){
    // Declaração de variáveis
    double litros, tempo, velocidade;

    // Leitura da entrada
    cin >> tempo;
    cin >> velocidade;


    // Cálculo de area do maior
    litros = (velocidade * tempo) / 12;

    // Exibição do resultado
    cout << fixed << setprecision(3) << litros << endl;

    return 0;
}
