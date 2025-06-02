#include <iostream>
#include <locale> // Para usar la letra � correctamente
#include <limits> // Para validar la entrada
using namespace std;

int main() {
    // Permitir mostrar tildes y la letra �
    setlocale(LC_ALL, "");

    int anio;

    cout << "==============================\n";
    cout << "  VERIFICADOR DE A�O BISIESTO\n";
    cout << "==============================\n";
    //Entrada 
    cout << "Ingrese un a�o: ";
    while (!(cin >> anio) || anio <= 0) {
        cout << "Entrada inv�lida. Ingrese un a�o v�lido: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    // Proceso 
    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
        cout << anio << " es un a�o bisiesto." << endl;//Salida
    } else {
        cout << anio << " no es un a�o bisiesto." << endl;//Salida
    }

    cout << "==============================" << endl;
}

