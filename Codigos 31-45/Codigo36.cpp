#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Ingrese el tamano del vector: ";
    cin >> n;

    int* numeros = new int[n];
    int suma = 0;

    cout << "Ingrese " << n << " numeros:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
        suma += numeros[i];
    }

    cout << "Los numeros y sus posiciones son:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Posicion " << i << ": " << numeros[i] << endl;
    }

    cout << "La suma de los numeros es: " << suma << endl;

    delete[] numeros;

    return 0;
}


