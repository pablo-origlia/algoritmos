/*
 * 4. Dado el radio R de una esfera que se solicita por teclado, 
 *    calcular e imprimir su superficie y su volumen.
 */
#include "Esfera.h"
#include <iostream>

using namespace std;

int main()
{
    
    float radio;
    
    cout << "Ingrese el radio de una esfera: ";
    cin >> radio;

    Esfera esfera(radio);

    cout << "Superficie de la esfera = " << esfera.superficie() << endl;
    cout << "Volumen de la esfera = " << esfera.volumen() << endl;

    return 0;
}