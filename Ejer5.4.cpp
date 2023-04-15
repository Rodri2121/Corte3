#include <iostream>

using namespace std;

int main() {
    double numero, suma = 0;
    int contador = 0;

    cout << "Introduce una lista de números positivos: \n";

    while (true) {
        cin >> numero;

        if (numero <= 0) {
            break;
        }

        suma += numero;
        contador++;
    }

    if (contador == 0) {
        cout << "No se ha introducido ningún número válido.\n";
    } else {
        double media = suma / contador;
        cout << "La media de los números introducidos es: " << media << "\n";
    }

    return 0;
}



   