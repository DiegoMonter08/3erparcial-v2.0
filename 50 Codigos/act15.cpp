#include <iostream>

#define PRECIO_ENTRADA 70

using namespace std;

int main() {
    int edad;
    float precio_final;

    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad < 5) {
        precio_final = PRECIO_ENTRADA * 0.4; 
    } else if (edad > 60) {
        precio_final = PRECIO_ENTRADA * 0.45;
    } else {
        precio_final = PRECIO_ENTRADA; 
    }

    cout << "El precio de la entrada es: " << precio_final << " pesos" << endl;

    return 0;
}

