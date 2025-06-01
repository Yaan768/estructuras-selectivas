#include <iostream> // Determinar el día de la semana
using namespace std;
int main() {
    int dia;
    // Interfaz
    cout << "==============================\n";
    cout << "     DIAS DE LA SEMANA ??     \n";
    cout << "==============================\n";
    cout << "1 = Lunes\n";
    cout << "2 = Martes\n";
    cout << "3 = Miercoles\n";
    cout << "4 = Jueves\n";
    cout << "5 = Viernes\n";
    cout << "6 = Sabado\n";
    cout << "7 = Domingo\n";
    cout << "------------------------------\n";
    // Entrada
    cout << "Ingrese un numero del 1 al 7: ";
    cin >> dia;
    // Proceso 
    cout << "Resultado: ";
    switch (dia) {
        case 1: cout << "Hoy es Lunes "; break;//Salida
        case 2: cout << "Hoy es Martes "; break;//Salida
        case 3: cout << "Hoy es Miercoles "; break;//Salida
        case 4: cout << "Hoy es Jueves "; break;//Salida
        case 5: cout << "Hoy es Viernes "; break;//Salida
        case 6: cout << "Hoy es Sabado "; break;//Salida
        case 7: cout << "Hoy es Domingo "; break;//Salida
        default: cout << "Numero invalido. Debe estar entre 1 y 7."; break;//Salida
    }
    cout << "\n==============================\n";
}

