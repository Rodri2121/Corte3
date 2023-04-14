#include <iostream>
#include <string>
using namespace std;

int main() {
    string mes;
    int anio, dias;
    
    cout << "Ingrese el nombre del mes (primera letra en mayuscula): ";
    cin >> mes;
    cout << "Ingrese el anio: ";
    cin >> anio;
    
    if (mes == "Enero" || mes == "Marzo" || mes == "Mayo" || mes == "Julio" || mes == "Agosto" || mes == "Octubre" || mes == "Diciembre") {
        dias = 31;
    } else if (mes == "Abril" || mes == "Junio" || mes == "Septiembre" || mes == "Noviembre") {
        dias = 30;
    } else if (mes == "Febrero") {
        if ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0) {
            dias = 29;
        } else {
            dias = 28;
        }
    } else {
        cout << "Mes no valido." << endl;
        return 1;
    }
    
    cout << "El mes de " << mes << " tiene " << dias << " dias." << endl;
    
    return 0;
}