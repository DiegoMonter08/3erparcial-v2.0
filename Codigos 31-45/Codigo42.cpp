#include <iostream>

using namespace std;

int main() {
    int matriz[2][2] = {
        {10, 20},
        {30, 40}
    };
    cout << "La matriz es:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << "matriz[" << i + 1 << "][" << j + 1 << "]=" << matriz[i][j] << ";" << endl;
        }
    }
    cout << "El valor en la fila 1, columna 1 es: " << matriz[0][0] << endl;

    return 0;
}

