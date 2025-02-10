#include <iostream>
#include <iomanip>  // Incluindo a biblioteca necessária para formatação
#include <cmath>    // Biblioteca para funções matemáticas, como pow()

using namespace std;

int main(){
    // Declaração de variáveis
    double X1, Y1, X2, Y2, distancia;

    // Leitura da entrada
    cin >> X1 >> Y1;
    cin >> X2 >> Y2;

    // Cálculo de area do maior
    distancia = sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2));

    // Exibição do resultado
    cout << fixed << setprecision(4) << distancia << endl;

    return 0;
}
