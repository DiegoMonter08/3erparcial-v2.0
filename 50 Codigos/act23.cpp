#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double base, exponente, resultado;

    cout << "Ingrese el numero base: ";
    cin >> base;
    cout << "Ingrese el exponente: ";
    cin >> exponente;

    resultado = pow(base, exponente);

    cout << base << " elevado a la potencia de " << exponente << " es: " << resultado << endl;

    return 0;
}

