/*
 * 8. Escribir un algoritmo que determine si un número es par.
 */
#include <iostream>

using namespace std;

int main()
{
    int numero;

    cout << "Ingrese un número entero: ";
    cin >> numero;

    cout << "El número es " << ((numero % 2)? "impar": "par") << endl;

    return 0;
}