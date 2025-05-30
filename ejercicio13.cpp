#include <iostream> // formar un triangulo
using namespace std;

int main() {
    float a, b, c; // a, b, c: longitudes a ingresar

    cout << "Ingrese las tres longitudes: ";
    cin >> a >> b >> c;

    // Validaci�n: no se permiten ceros ni n�meros negativos
    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Las longitudes deben ser mayores que cero." << endl;
    }
    else if (a + b > c && a + c > b && b + c > a) {
        cout << "Se puede formar un triangulo." << endl;
    } 
    else {
        cout << "No se puede formar un triangulo." << endl;
    }
}
