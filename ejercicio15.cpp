#include <iostream> // Determinar el d�a de la semana
using namespace std;

int main() {
    int dia;
    // Entrada
    cout << "Ingrese un n�mero del 0 al 6 (0 = Domingo, 6 = S�bado): ";
    cin >> dia;
    // Proceso y salida
    switch (dia) {
        case 0: cout << "Domingo"; break;
        case 1: cout << "Lunes"; break;
        case 2: cout << "Martes"; break;
        case 3: cout << "Mi�rcoles"; break;
        case 4: cout << "Jueves"; break;
        case 5: cout << "Viernes"; break;
        case 6: cout << "S�bado"; break;
        default: cout << "N�mero inv�lido. Debe estar entre 0 y 6."; break;
    }
}

