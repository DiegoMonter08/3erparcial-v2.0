#include <iostream>
#include <string>

using namespace std;

bool validarDatos(int cantidad, float precio_unitario) {
    if (cantidad < 0 || precio_unitario < 0) {
        cout << "La cantidad y el precio unitario deben ser n?meros positivos." << endl;
        return false;
    }
    return true;
}

int main() {
    string nombre;
    string contrasena;
    int intentos = 3;
    int cantidad;
    float precio_unitario;
    float importe_total = 0;

    while (intentos > 0) {
        cout << "Introduce tu nombre de usuario: ";
        cin >> nombre;
        cout << "Introduce tu contrase?a (grado grupo o numero de lista): ";
        cin >> contrasena;

        if (contrasena == "2bmpg" || contrasena == "25") {
            cout << "Bienvenido al sistema." << endl;
            break;
        } else {
            cout << "Nombre de usuario o contrase?a incorrectos. Intentos restantes: " << intentos - 1 << endl;
            intentos--;
        }
    }

    if (intentos == 0) {
        cout << "Se ha superado el numero de intentos permitido." << endl;
        return 0;
    }

    cout << "Ingrese la cantidad de unidades vendidas (0 para terminar): ";
    for (int i = 1; ; i++) {
        cin >> cantidad;

        if (cantidad == 0) {
            break;
        }

        cout << "Ingrese el precio unitario del articulo: ";
        cin >> precio_unitario;

        if (!validarDatos(cantidad, precio_unitario)) {
            continue;
        }

        importe_total += cantidad * precio_unitario;
    }

    cout << "El importe total de la factura es: " << fixed << importe_total << endl;

    return 0;
}

