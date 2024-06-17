#include <iostream>

using namespace std;

int main() {
    int n;
    int positivos = 0;
    int negativos = 0;

    cout << "Ingrese el numero de posiciones: ";
    cin >> n;

    int* numeros = new int[n];

    cout << "Ingrese " << n << " numeros:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];

        if (numeros[i] > 0) {
            positivos++;
        } else if (numeros[i] < 0) {
            negativos++;
        }
    }

    cout << "Los numeros ingresados son:" << endl;
    for (int i = 0; i < n; ++i) {
        if (numeros[i] > 0) {
            cout << "El numero en la posicion " << i + 1 << " es positivo." << endl;
        } else if (numeros[i] < 0) {
            cout << "El numero en la posicion " << i + 1 << " es negativo." << endl;
        } else {
            cout << "El numero en la posicion " << i + 1 << " es cero." << endl;
        }
    }

    cout << "Cantidad de numeros positivos: " << positivos << endl;
    cout << "Cantidad de numeros negativos: " << negativos << endl;

    delete[] numeros;

    return 0;
}

