#include <iostream>

using namespace std;

int main() {
    int limite;
    cout << "Ingrese el numero hasta el cual quiere contar de 5 en 5: ";
    cin >> limite;
    for (int i = 0; i <= limite; i += 5) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}

