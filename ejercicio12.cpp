#include <iostream>
using namespace std;
int main() {
    float x, g;
    cout << "Ingrese el valor de x: ";
    cin >> x;

    if (x > 8) {
        g = 2 * x;
    } else if (x > 0) {
        g = x - 5;
    } else {
        g = x * x;
    }

    cout << "El valor de g(x) es: " << g << endl;
}

