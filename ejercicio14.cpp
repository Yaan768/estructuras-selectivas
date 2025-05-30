#include <iostream>//
using namespace std;
int main() {
    int num;
    //Entrada
    cout << "Ingrese un numero del 1 al 5: ";
    cin >> num;
    //Proceso
    switch (num) {
        case 1: cout << "La vocal es A"; break;//Salida
        case 2: cout << "La vocal es E"; break;//Salida
        case 3: cout << "La vocal es I"; break;//Salida
        case 4: cout << "La vocal es O"; break;//Salida
        case 5: cout << "La vocal es U"; break;//Salida
        default: cout << "Numero fuera de rango (1-5)";//Salida
    }
}

