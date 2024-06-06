#include <iostream>

using namespace std;

int main() {
    double horasTrabajadas, salarioPorHora, salarioTotal;
    cout << "Ingrese las horas trabajadas: ";
    cin >> horasTrabajadas;
    cout << "Ingrese el salario por hora: ";
    cin >> salarioPorHora;
    if (horasTrabajadas <= 40) {
        salarioTotal = horasTrabajadas * salarioPorHora;
    } else {
        salarioTotal = 40 * salarioPorHora + (horasTrabajadas - 40) * salarioPorHora * 1.5;
    }
    cout << "El salario total es: " << salarioTotal << endl;

    return 0;
}

