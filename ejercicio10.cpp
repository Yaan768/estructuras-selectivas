#include <iostream>
using namespace std;

int main() {
    int anio;

    cout << "Ingrese un a�o: ";
    cin >> anio;

    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
        cout << anio << " es un a�o bisiesto." << endl;
    } else {
        cout << anio << " no es un a�o bisiesto." << endl;
    }
}

