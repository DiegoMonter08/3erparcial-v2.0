#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << "Ingrese el tercer numero: ";
    cin >> num3;
    int mayor = num1;
    if (num2 > mayor) {
        mayor = num2;
    }
    if (num3 > mayor) {
        mayor = num3;
    }
    int menor = num1;
    if (num2 < menor) {
        menor = num2;
    }
    if (num3 < menor) {
        menor = num3;
    }
    bool hayRepetidos = false;
    if (num1 == num2 || num1 == num3 || num2 == num3) {
        hayRepetidos = true;
    }
    cout << "El numero mayor es: " << mayor << endl;
    cout << "El numero menor es: " << menor << endl;
    if (hayRepetidos) {
        cout << "Hay numeros repetidos." << endl;
    } else {
        cout << "No hay numeros repetidos." << endl;
    }

    return 0;
}

