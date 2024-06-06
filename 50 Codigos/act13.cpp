#include <iostream>

using namespace std;

int main() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    if (numero % 2 == 0) {
        cout << "El numero " << numero << " es par." << endl;
    } else {
        cout << "El numero " << numero << " es impar." << endl;
    }
    if (numero % 3 == 0) {
        cout << "El numero " << numero << " es divisible entre 3." << endl;
    } else {
        cout << "El numero " << numero << " no es divisible entre 3." << endl;
    }

    return 0;
}

