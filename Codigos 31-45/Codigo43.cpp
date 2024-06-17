#include <iostream>

using namespace std;

int main() {
    int filas, columnas;

    cout << "Ingrese el numero de filas: ";
    cin >> filas;
    cout << "Ingrese el numero de columnas: ";
    cin >> columnas;

    int matriz[filas][columnas];

    cout << "Ingrese los numeros para la matriz:" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << "Ingrese el numero para la posicion [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
        }
    }

    cout << "La suma de las columnas es:" << endl;
    for (int j = 0; j < columnas; ++j) {
        int suma = 0;
        for (int i = 0; i < filas; ++i) {
            suma += matriz[i][j];
        }
        cout << "Columna " << j + 1 << ": " << suma << endl;
    }

    return 0;
}

