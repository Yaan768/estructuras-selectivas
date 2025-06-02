#include <iostream>
#include <locale> // Para usar la letra ñ correctamente
#include <limits> // Para validar la entrada
using namespace std;

int main() {
    // Permitir mostrar tildes y la letra ñ
    setlocale(LC_ALL, "");

    int anio;

    cout << "==============================\n";
    cout << "  VERIFICADOR DE AÑO BISIESTO\n";
    cout << "==============================\n";
    //Entrada 
    cout << "Ingrese un año: ";
    while (!(cin >> anio) || anio <= 0) {
        cout << "Entrada inválida. Ingrese un año válido: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    // Proceso 
    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
        cout << anio << " es un año bisiesto." << endl;//Salida
    } else {
        cout << anio << " no es un año bisiesto." << endl;//Salida
    }

    cout << "==============================" << endl;
}

