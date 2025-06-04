#include <iostream>
using namespace std;

int main() {
    int a, b, c, mayor;
    cout << "Ingrese tres numeros: ";
    cin >> a >> b >> c;
    mayor = a;
    if (b > mayor) mayor = b;
	if (c > mayor) mayor = c;
    cout << "Mayor: " << mayor << endl;
    return 0;
}
