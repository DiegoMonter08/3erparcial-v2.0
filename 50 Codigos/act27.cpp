#include <iostream>
#include <string>

using namespace std;

int main() {
    string usuario, contrasena;
    const string usuario_correcto = "root";
    const string contrasena_correcta = "1234";

    cout << "Ingrese el nombre de usuario: ";
    cin >> usuario;
    cout << "Ingrese la contrasena: ";
    cin >> contrasena;

    if (usuario == usuario_correcto && contrasena == contrasena_correcta) {
        cout << "Inicio de sesion exitoso. Bienvenido, " << usuario << "!" << endl;
    } else {
        cout << "Usuario o contrasena incorrectos. Acceso denegado." << endl;
    }

    return 0;
}

