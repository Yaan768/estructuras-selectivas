#include <iostream>//Numero credito segun la tarjeta 
using namespace std;
int main() {
    int tip;
    float cred, nuevCred;
    //Entrada 
    cout << "Ingrese el tipo de tarjeta (1, 2, 3 u otro): ";
    cin >> tip;
    cout << "Ingrese el credito actual: ";
    cin >> cred;
    //Proceso
    if (tip == 1) {
        nuevCred = cred * 1.25;
    } 
	else if (tip == 2) {
        nuevCred = cred * 1.35;
    } 
	else if (tip == 3) {
        nuevCred = cred * 1.40;
    } 
	else {
        nuevCred = cred * 1.50;
    }
    //Salida
    cout << "El nuevo credito aumentado es: " << nuevCred;
}
