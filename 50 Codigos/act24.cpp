#include <iostream>

using namespace std;

double potencia(double base, int exponente) {
    double resultado = 1.0;
    for (int i = 0; i < exponente; ++i) {
        resultado *= base;
    }
    return resultado;
}

int main() {
    double base, resultado;
    int exponente;

    cout << "Ingrese el numero base: ";
    cin >> base;
    cout << "Ingrese el exponente: ";
    cin >> exponente;

    resultado = potencia(base, exponente);

    cout << base << " elevado a la potencia de " << exponente << " es: " << resultado << endl;

    return 0;
}

