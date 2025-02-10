#include <iostream>
#include <iomanip>  // Incluindo a biblioteca necessária para formatação
#include <cmath>    // Biblioteca para funções matemáticas, como pow()

using namespace std;

int main(){
    // Declaração de variáveis
    double A, B, C, pi = 3.14159, TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO;

    // Leitura da entrada
    cin >> A >> B >> C;

    // Cálculo de area das formas (interressante notar 4.0 ou 3.0 pois o c++ entende que se n tiver o . eles sao inteiros)
    TRIANGULO = (A * C) / 2.0; 
    CIRCULO = pi * (C * C);
    TRAPEZIO = ((A + B) * C) / 2.0;
    QUADRADO = B * B;
    RETANGULO = A * B;

    // Exibição do resultado com 3 casas decimais
    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << TRIANGULO << endl;
    cout << "CIRCULO: " << CIRCULO << endl;
    cout << "TRAPEZIO: " << TRAPEZIO << endl;
    cout << "QUADRADO: " << QUADRADO << endl;
    cout << "RETANGULO: " << RETANGULO << endl;

    return 0;
}
