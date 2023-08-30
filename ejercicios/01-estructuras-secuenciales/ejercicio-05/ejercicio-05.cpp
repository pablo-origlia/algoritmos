/*
 * 5. Leer la base y la altura de un rectángulo, calcular el perímetro y la  *    superficie.
 */
#include "Rectangulo.h"
#include <iostream>

using namespace std;

int main()
{
    float base;
    float altura;

    cout << "Ingrese la base de un rectángulo: ";
    cin >> base;

    cout << "Ingrese la altura de un rectángulo: ";
    cin >> altura;

    Rectangulo rectangulo(base, altura);

    cout << "Superficie del rectángulo = " << rectangulo.superficie() << endl;
    cout << "Perímetro del rectángulo = " << rectangulo.perimetro() << endl;

    return 0;
}