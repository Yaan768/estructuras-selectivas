#include <iostream> // Determinar el día de la semana
using namespace std;

int main() {
    int dia;
    // Entrada
    cout << "Ingrese un número del 0 al 6 (0 = Domingo, 6 = Sábado): ";
    cin >> dia;
    // Proceso y salida
    switch (dia) {
        case 0: cout << "Domingo"; break;
        case 1: cout << "Lunes"; break;
        case 2: cout << "Martes"; break;
        case 3: cout << "Miércoles"; break;
        case 4: cout << "Jueves"; break;
        case 5: cout << "Viernes"; break;
        case 6: cout << "Sábado"; break;
        default: cout << "Número inválido. Debe estar entre 0 y 6."; break;
    }
}

