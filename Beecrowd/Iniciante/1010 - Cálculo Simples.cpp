#include <iostream>
#include <iomanip>  // Incluindo a biblioteca necessária para formatação

using namespace std;

int main(){
    // Declaração de variáveis
    int peca1, numero1, peca2, numero2; 
    double valor1, valor2, total;

    // Leitura da entrada
    cin >> peca1 >> numero1 >> valor1;
    cin >> peca2 >> numero2 >> valor2;


    // Cálculo do salário
    total = (valor1 * numero1) + (valor2 * numero2);

    // Exibição do resultado com formatação
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << total << endl;

    return 0;
}
