#include <iostream>
using namespace std;

int main() {
    int num, count = 0;
    double total = 0;
    
    cout << "Ingrese una lista de numeros positivos (termine con un numero negativo): " << endl;
    
    while (true) {
        cin >> num;
        
        if (num < 0) {
            break; // salir del bucle si se ingresa un numero negativo
        }
        
        total += num; // sumar el numero ingresado a la suma total
        count++; // incrementar el contador de numeros ingresados
    }
    
    if (count == 0) {
        cout << "No se ingresaron numeros positivos." << endl;
    } else {
        double media = total / count; // calcular la media
        
        cout << "La media de los numeros ingresados es: " << media << endl;
    }
    
    return 0;
}