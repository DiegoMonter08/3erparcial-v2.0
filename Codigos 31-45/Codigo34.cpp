#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Ingrese el tamano del arreglo: ";
    cin >> n;

    int* numeros = new int[n];

    cout << "Ingrese " << n << " numeros:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    cout << "Los numeros y sus posiciones son:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Posicion " << i + 1 << ": " << numeros[i] << endl;
    }

    delete[] numeros;

    return 0;
}

