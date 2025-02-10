#include <iostream>
#include <iomanip>  // Incluindo a biblioteca necessária para formatação
#include <cmath>    // Biblioteca para funções matemáticas, como pow()

using namespace std;

int main(){
    // Declaração de variáveis
    double X, Y, medio;

    // Leitura da entrada
    cin >> X;
    cin >> Y;

    // Cálculo de area do maior
    medio = X / Y;
    // Exibição do resultado
    cout << fixed << setprecision(3) << medio << " km/l" << endl;

    return 0;
}
