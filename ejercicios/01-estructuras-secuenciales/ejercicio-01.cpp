/*
 * 1. Leer un número por teclado e imprimirlo en pantalla con el 
 * siguiente cartel:
 *       “Numero ingresado" = numero.
 */
#include <iostream>

using namespace std;
 
int main()
{
    int numero;
    
    cout << "Ingrese un número: ";
    cin >> numero;

    cout << "Número ingresado = " << numero;
    return 0;
}