#include <iostream> //Número crédito según la tarjeta 
using namespace std;

int main() {
    int tip;
    float cred, nuevCred;

    // Entrada 
    cout << "Ingrese el tipo de tarjeta (1, 2, 3 u otro): ";
    cin >> tip;

    // Validación de crédito
    cout << "Ingrese el credito actual: ";
    cin >> cred;

    if (cred < 0) {
        cout << "El credito no puede ser negativo." << endl;
        return 0;
    }

    // Proceso
    if (tip == 1) {
        nuevCred = cred * 1.25;
    } else if (tip == 2) {
        nuevCred = cred * 1.35;
    } else if (tip == 3) {
        nuevCred = cred * 1.40;
    } else {
        nuevCred = cred * 1.50;
    }

    // Salida
    cout << "El nuevo credito aumentado es: S/. " << nuevCred << endl;
}

