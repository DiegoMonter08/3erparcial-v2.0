#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3, num4, num5, menor;
    
    cout << "Ingrese cinco numeros enteros:" << endl;
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    
    menor = num1;
    if (num2 < menor) {
        menor = num2;
    }
    if (num3 < menor) {
        menor = num3;
    }
    if (num4 < menor) {
        menor = num4;
    }
    if (num5 < menor) {
        menor = num5;
    }
    
    cout << "El menor numero es: " << menor << endl;

    return 0;
}

