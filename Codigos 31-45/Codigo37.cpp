#include <iostream>

using namespace std;

int main() {
    int n1, n2;

    cout << "Ingrese el tamano del primer vector: ";
    cin >> n1;
    cout << "Ingrese el tamano del segundo vector: ";
    cin >> n2;

    int* vector1 = new int[n1];
    int* vector2 = new int[n2];

    cout << "Ingrese los numeros para el primer vector:" << endl;
    for (int i = 0; i < n1; ++i) {
        cout << "Numero " << i + 1 << ": ";
        cin >> vector1[i];
    }

    cout << "Ingrese los numeros para el segundo vector:" << endl;
    for (int i = 0; i < n2; ++i) {
        cout << "Numero " << i + 1 << ": ";
        cin >> vector2[i];
    }

    cout << "Vector 1:" << endl;
    for (int i = 0; i < n1; ++i) {
        cout << "Posicion " << i << ": " << vector1[i] << endl;
    }

    cout << "Vector 2:" << endl;
    for (int i = 0; i < n2; ++i) {
        cout << "Posicion " << i << ": " << vector2[i] << endl;
    }

    int min_size = (n1 < n2) ? n1 : n2;

    cout << "Suma de las posiciones correspondientes:" << endl;
    for (int i = 0; i < min_size; ++i) {
        cout << "Posicion " << i << ": " << (vector1[i] + vector2[i]) << endl;
    }

    delete[] vector1;
    delete[] vector2;

    return 0;
}


