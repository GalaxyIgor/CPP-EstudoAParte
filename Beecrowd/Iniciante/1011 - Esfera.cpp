#include <iostream>
#include <iomanip>  // Incluindo a biblioteca necessária para formatação
#include <cmath>    // Biblioteca para funções matemáticas, como pow()

using namespace std;

int main(){
    // Declaração de variáveis
    double raio, pi = 3.14159, VOLUME;

    // Leitura da entrada
    cin >> raio;

    // Cálculo do volume da esfera (interressante notar 4.0 ou 3.0 pois o c++ entende que se n tiver o . eles sao inteiros)
    VOLUME = (4.0/3.0) * pi * pow(raio, 3);

    // Exibição do resultado com 3 casas decimais
    cout << fixed << setprecision(3) << "VOLUME = " << VOLUME << endl;

    return 0;
}
