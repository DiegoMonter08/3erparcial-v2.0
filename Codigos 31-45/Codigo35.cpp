#include <iostream>
#include <string>

using namespace std;

int main() {
    string nombres[] = {"fernando", "oscar"};
    int numeros[] = {74, 56, 10};

    cout << "Arreglo 1:" << endl;
    for (int i = 0; i < 2; ++i) {
        cout << "El dato de la posicion " << i + 1 << " = " << nombres[i] << endl;
    }

    cout << "Arreglo 2:" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << "El dato de la posicion " << i << " = " << numeros[i] << endl;
    }

    return 0;
}

