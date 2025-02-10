#include <iostream>
#include <iomanip>  // Incluindo a biblioteca necessária para formatação

using namespace std;

int main(){
    // Declaração de variáveis
    double montante, salario, total;
    string nome;

    // Leitura da entrada
    cin >> nome >> salario >> montante;
    
    // Cálculo do salário
    total = salario + (montante * 0.15);

    // Exibição do resultado com formatação
    cout << "TOTAL = R$ " << fixed << setprecision(2) << total << endl;

    return 0;
}
