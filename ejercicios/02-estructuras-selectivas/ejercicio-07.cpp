/*
 * 7. Leer dos números reales e imprimir el mayor de ellos.
 */
#include <iostream>

using namespace std;

int main()
{
    float numeroA;
    float numeroB;

    cout << "Ingrese un número real: ";
    cin >> numeroA;

    cout << "Ingrese otro número real: ";
    cin >> numeroB;

    cout << "El mayor número es " << max(numeroA, numeroB) << endl;

    return 0;
}