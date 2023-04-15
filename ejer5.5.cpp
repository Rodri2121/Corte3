#include<iostream>
using namespace std;
int main() {
    for (int numero = 2; numero <= 2000; numero++) {
        bool es_primo = true;

        for (int i = 2; i < numero; i++) {
            if (numero % i == 0) {
                es_primo = false;
               
            }
        }

        if (es_primo) {
            cout << numero << " \n";
        }
    }

    return 0;
}  
    








    