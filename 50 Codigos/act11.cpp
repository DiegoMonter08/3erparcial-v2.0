#include <iostream>

using namespace std;

int main() {
    int hora;
    cout << "Ingrese la hora del dia (en formato de 24 horas): ";
    cin >> hora;
    if (hora > 12) {
        cout << "Buenas tardes." << endl;
    } else {
        cout << "Buenos dias." << endl;
    }
    return 0;
}

