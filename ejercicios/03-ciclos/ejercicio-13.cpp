/*
 * 13. Imprimir por pantalla una lista de 20 números consecutivos, los cuales
 *     comienzan con un número ingresado por teclado.
 */
#include <iostream>

using namespace std;

int main()
{
    int numero;
    int siguiente;

    cout << "Ingrese un numero entero: ";
    cin >> numero;
    
    for (int i=0; i<20; i++) {
        cout << numero + i << endl;
    }

    return 0;
}