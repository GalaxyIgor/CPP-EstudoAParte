#include <iostream>
using namespace std;
int main() {
    int A, B, C, D, diferenca;
    
    // Leitura dos valores A, B, C e D
    cin >> A >> B >> C >> D;
    
    // Cálculo da diferença
    diferenca = (A * B) - (C * D);
    
    // Exibição do resultado no formato solicitado
    cout << "DIFERENCA = " << diferenca << endl;
    
    return 0;
}
