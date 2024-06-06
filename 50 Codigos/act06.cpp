#include <iostream>
#include <sstream>

using namespace std;

int main() {
    int numero;
    int palo;


    cout << "Ingrese el numero de la carta (1-7, 10-12): ";
    cin >> numero;
    cout << "Ingrese el palo de la carta (1 = Oros, 2 = Copas, 3 = Espadas, 4 = Bastos): ";
    cin >> palo;

    string nombreNumero;
    string nombrePalo;

    
    switch (numero) {
        case 1:
            nombreNumero = "As";
            break;
        case 10:
            nombreNumero = "Sota";
            break;
        case 11:
            nombreNumero = "Caballo";
            break;
        case 12:
            nombreNumero = "Rey";
            break;
        default:
            if (numero >= 2 && numero <= 7) {
                stringstream ss;
                ss << numero;
                nombreNumero = ss.str();
            } else {
                cout << "Numero de carta invalido." << endl;
                return 1; 
            }
            break;
    }

    switch (palo) {
        case 1:
            nombrePalo = "Oros";
            break;
        case 2:
            nombrePalo = "Copas";
            break;
        case 3:
            nombrePalo = "Espadas";
            break;
        case 4:
         nombrePalo = "Bastos";
            break;
        default:
            cout << "Palo de carta inválido." << endl;
            return 1; 
    }

    cout << "La carta es: " << nombreNumero << " de " << nombrePalo << "." << endl;

    return 0;
}

