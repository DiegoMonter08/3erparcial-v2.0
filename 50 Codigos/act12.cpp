#include <iostream>

using namespace std;

int main() {
    int num1, num2, residuo;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    residuo = num1 % num2;
    cout << "El residuo de " << num1 << " dividido entre " << num2 << " es: " << residuo << endl;
    if (residuo == 0) {
        cout << num1 << " es divisible por " << num2 << "." << endl;
    } else {
        cout << num1 << " no es divisible por " << num2 << "." << endl;
    }

    return 0;
}

