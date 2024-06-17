#include <iostream>

using namespace std;

int main() {
    int num_paises, posicion;

    cout << "Ingrese el numero de paises: ";
    cin >> num_paises;

    cout << "El numero de posiciones es: " << num_paises << endl;

    cout << "Ingrese una posicion (entre 1 y " << num_paises << "): ";
    cin >> posicion;

    if (posicion >= 1 && posicion <= num_paises) {
        cout << "El numero de la posicion es: " << posicion << endl;
    } else {
        cout << "La posicion ingresada es invalida." << endl;
    }

    return 0;
}

