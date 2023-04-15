#include <iostream>

using namespace std;

int main() {
    double nota = 0;
    cout << "Introduce las notas de los estudiantes (termina con un número negativo): " << endl;

    while (nota >= 0) {
        cin >> nota;
        if (nota >= 7 && nota < 9) {
            cout << nota << " es una nota notable." << endl;
        }
    }

    return 0;
}