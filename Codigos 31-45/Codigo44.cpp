#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    const int filas = 3;
    const int columnas = 3;

    int matriz[filas][columnas] = {
        {2, 9, 8},
        {1, 0, 8},
        {6, 5, 9}
    };

    cout << "Numeros generados aleatoriamente y almacenados en la matriz:" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << matriz[i][j] << endl;
        }
    }

    return 0;
}

