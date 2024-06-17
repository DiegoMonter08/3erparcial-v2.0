#include <iostream>
#include <cstdlib> 

using namespace std;

int main() {
    cout << "Los datos de las 10 posiciones:" << endl;
    for (int i = 1; i <= 10; ++i) {
        int num = rand() % 100; 
        cout << "El numero en la posicion " << i << " es " << num << endl;
    }

    return 0;
}

