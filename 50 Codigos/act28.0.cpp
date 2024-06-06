#include <iostream>
#include <string>

using namespace std;

int main() {
    string usuario, grupo;
    const string usuario_correcto = "Diego";
    const string grupo_correcto = "2bmpg";

    cout << "Ingrese el nombre de usuario: ";
    cin >> usuario;
    cout << "Ingrese el grupo: ";
    cin >> grupo;

    if (usuario == usuario_correcto && grupo == grupo_correcto) {
        cout << "Inicio de sesion exitoso. Bienvenido, " << usuario << "!" << endl;
    } else {
        cout << "Usuario o grupo incorrectos. Acceso denegado." << endl;
    }

    return 0;
}

