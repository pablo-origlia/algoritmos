/*
 * 6. Leer un número real y decir si es mayor, menor o igual a cero.
 */
#include <iostream>

using namespace std;

int main()
{
    float numero;

    cout << "Ingrese un número real: ";
    cin >> numero;

    if (numero == 0) {
        cout << "El número es igual a cero ";
    } else if (numero > 0) {
        cout << "El número es mayor a cero ";
    } else {
        cout << "El número es menor a cero ";
    }

    return 0;
}