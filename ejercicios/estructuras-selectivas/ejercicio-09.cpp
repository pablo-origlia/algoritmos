/*
 * 9. Escribir un algoritmo que determine si un número M es divisible por N.
 */
#include <iostream>

using namespace std;

bool esDivisible(int a, int b) {
    a = abs(a);
    b = abs(b);
    if (a > b) {
        while (a > 0) {
            a = a - b;
        }
	return (a == 0);
    }
    return false;
}

int main()
{
    int numeroM;
    int numeroN;

    cout << "Ingrese un número entero: ";
    cin >> numeroM;

    cout << "Ingrese otro número entero: ";
    cin >> numeroN;

    cout << "El número " << numeroM 
        << (esDivisible(numeroM,numeroN)? " es ": " no es ") << "divisible por "
        << numeroN << endl;

    return 0;
}