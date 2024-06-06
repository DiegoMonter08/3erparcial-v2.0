#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    int mayor, menor;
    if (num1 > num2) {
        mayor = num1;
        menor = num2;
    } else if (num2 > num1) {
        mayor = num2;
        menor = num1;
    } else {
        cout << "Los numeros son iguales." << endl;
        return 0;
    }
    cout << "El numero mayor es: " << mayor << endl;
    cout << "El numero menor es: " << menor << endl;

    return 0;
}

