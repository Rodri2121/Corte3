#include <iostream>

using namespace std;

int main() {
    double numero, SumaPositivos = 0, SumaNegativos = 0;
    int ContadorPositivos = 0, ContadorNegativos = 0;

    cout << "Introduce 100 numeros: "<<endl;

    for (int i = 0; i < 100; i++) {
        cin >> numero;

        if (numero > 0) {
            SumaPositivos += numero;
            ContadorPositivos++;
        } else if (numero < 0) {
            SumaNegativos += numero;
            ContadorNegativos++;
        }
    }

    if (ContadorPositivos == 0) {
        cout << "No se han introducido numeros positivos."<<endl;
    } else {
        double media_positivos = SumaPositivos / ContadorPositivos;
        cout << "La media de los numeros positivos es: " << media_positivos <<endl;
    }

    if (ContadorNegativos == 0) {
        cout << "No se han introducido numeros negativos.\n";
    } else {
        double MediaNegativos = SumaNegativos / ContadorNegativos;
        cout << "La media de los numeros negativos es: " << MediaNegativos <<endl;
    }

    return 0;
}