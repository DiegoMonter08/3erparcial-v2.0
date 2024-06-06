#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int opcion;
    double area;

    cout << "Seleccione una figura para calcular el area:" << endl;
    cout << "1. Circulo" << endl;
    cout << "2. Rectangulo" << endl;
    cout << "3. Triangulo" << endl;
    cout << "4. Cuadrado" << endl;
    cout << "Ingrese su opcion (1-4): ";
    cin >> opcion;

    switch (opcion) {
        case 1: {
            double radio;
            cout << "Ingrese el radio del circulo: ";
            cin >> radio;
            area = M_PI * radio * radio;
            cout << "El area del circulo es: " << area << endl;
            break;
        }
        case 2: {
            double base, altura;
            cout << "Ingrese la base del rectangulo: ";
            cin >> base;
            cout << "Ingrese la altura del rectangulo: ";
            cin >> altura;
            area = base * altura;
            cout << "El area del rectangulo es: " << area << endl;
            break;
        }
        case 3: {
            double base, altura;
            cout << "Ingrese la base del triangulo: ";
            cin >> base;
            cout << "Ingrese la altura del triangulo: ";
            cin >> altura;
            area = (base * altura) / 2;
            cout << "El area del triangulo es: " << area << endl;
            break;
        }
        case 4: {
            double lado;
            cout << "Ingrese el lado del cuadrado: ";
            cin >> lado;
            area = lado * lado;
            cout << "El area del cuadrado es: " << area << endl;
            break;
        }
        default:
            cout << "Opcion invalida. Por favor, seleccione una opcion entre 1 y 4." << endl;
            return 1;
    }

    return 0;
}

