#include <iostream>

using namespace std;

int main() {
    int numero;
    int suma = 0;
    do {
        cout << "Ingrese un numero (0 para terminar): ";
        cin >> numero;

        if (numero != 0) {
            suma += numero;
        }

    } while (numero != 0);
    cout << "La suma de los numeros ingresados es: " << suma << endl;

    return 0;
}

