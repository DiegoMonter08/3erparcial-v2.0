#include <iostream>
#include <string>

using namespace std;

int main() {
    const int tamano_arreglo = 3;
    string arreglo1[tamano_arreglo] = {"fernando", "oscar"};
    int arreglo2[tamano_arreglo] = {74, 56, 10};

    cout << "En el arreglo 1 los datos son:" << endl;
    for (int i = 0; i < tamano_arreglo; ++i) {
        cout << "Dato de la posicion " << i << ": " << arreglo1[i] << endl;
    }

    cout << "En el arreglo 2 los datos son:" << endl;
    for (int i = 0; i < tamano_arreglo; ++i) {
        cout << "Dato de la posicion " << i << ": " << arreglo2[i] << endl;
    }

    return 0;
}

