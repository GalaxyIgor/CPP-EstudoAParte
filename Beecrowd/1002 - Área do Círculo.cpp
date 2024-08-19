#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    double raio;
    cin >> raio;
    double pi = 3.14159;
    double area = pi * (raio * raio);
    cout << fixed << setprecision(4) << "A=" << area << endl;
    return 0;
}
