#include <iostream>
#include <iomanip>  // Incluindo a biblioteca necessária para formatação

using namespace std;

int main(){
    // Declaração de variáveis
    int numeroFuncionario, horasTrabalhadas;
    double valorHora, salario;

    // Leitura da entrada
    cin >> numeroFuncionario >> horasTrabalhadas >> valorHora;
    
    // Cálculo do salário
    salario = horasTrabalhadas * valorHora;

    // Exibição do resultado com formatação
    cout << "NUMBER = " << numeroFuncionario << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << salario << endl;

    return 0;
}
