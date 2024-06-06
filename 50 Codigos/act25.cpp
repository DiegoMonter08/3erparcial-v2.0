#include <iostream>

using namespace std;

int main() {
    const int cantidad_numeros = 10;
    int numeros[cantidad_numeros];
    int mayor, menor, suma;

    cout << "Ingrese 10 numeros:" << endl;
    for (int i = 0; i < cantidad_numeros; ++i) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    mayor = menor = suma = numeros[0];

    for (int i = 1; i < cantidad_numeros; ++i) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
        suma += numeros[i];
    }

    cout << "El numero mayor es: " << mayor << endl;
    cout << "El numero menor es: " << menor << endl;
    cout << "La suma de los numeros es: " << suma << endl;

    return 0;
}

