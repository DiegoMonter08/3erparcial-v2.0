#include <iostream>

using namespace std;

int main() {
    char letra;

    cout << "Ingrese una letra: ";
    cin >> letra;

    letra = tolower(letra);

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        cout << "La letra " << letra << " es una vocal." << endl;
    } else {
        cout << "La letra " << letra << " no es una vocal." << endl;
    }

    return 0;
}

