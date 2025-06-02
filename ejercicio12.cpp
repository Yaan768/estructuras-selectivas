#include <iostream>
#include <limits> // Para limpiar el buffer en caso de error
using namespace std;

int main() {
    float x, g;

    // Entrada con validación
    cout << "=====================================\n";
    cout << "     CALCULAR LA FUNCION g(x)       \n";
    cout << "=====================================\n";
    cout << "Ingrese el valor de x: ";

    while (!(cin >> x)) {
        cout << "Entrada invalida. Por favor, ingrese un numero valido: ";
        cin.clear(); // Limpia el estado de error
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpia el buffer
    }

    // Proceso: cálculo de g(x)
    if (x > 8) {
        g = 2 * x;
    } else if (x > 0) {
        g = x - 5;
    } else {
        g = x * x;
    }

    // Salida
    cout << "-------------------------------------\n";
    cout << "El valor de g(x) es: " << g << endl;
    cout << "=====================================\n";
}

