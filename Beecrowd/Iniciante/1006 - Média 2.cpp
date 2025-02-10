#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double A, B, C, media;
    
    // Leitura dos valores A, B e C
    cin >> A >> B >> C;
    
    // Cálculo da média ponderada
    media = (A * 2.0 + B * 3.0 + C * 5.0) / 10.0;
    
    // Exibição do resultado com 1 dígito após o ponto decimal
    cout << fixed << setprecision(1);
    cout << "MEDIA = " << media << endl;
    
    return 0;
}
