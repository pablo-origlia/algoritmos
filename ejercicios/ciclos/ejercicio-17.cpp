/*
 * 17. Leer un valor N y luego N números enteros. Se pide imprimir el mayor
 *     y el menor y las veces que aparece cada uno.
 */
#include <iostream>

using namespace std;

int main()
{
    int numero;
    int maxN;
    int minN;
    string cadena = "";
    int maxPos;
    int minPos;
    bool loop = true;

    cout << "Ingrese un numero entero, o una letra para terminar: " << endl;
    cin >> cadena;

    if (!isdigit(cadena[0])) {
        loop = false;
    } else {
        numero = stoi(cadena);
        maxN = numero;
        minN = numero;
        maxPos = 1;
        minPos = 1;
    }

    while (loop) { 
        cout << "Ingrese un numero entero, o una letra para terminar: " << endl;
        cin >> cadena;

        if (!isdigit(cadena[0])) {
            loop = false;
        } else {
            numero = stoi(cadena);

            if(maxN == numero) {
                maxPos++;
            }
            if(minN == numero) {
                minPos++;
            }
            if(maxN < numero) {
                maxN = numero;
                maxPos = 1;
            }
            if(minN > numero) {
                minN = numero;
                minPos = 1;
            }
            
        }
    }

    cout << "El maximo numero " << maxN << " y aparecio " << maxPos << endl;
    cout << "El minimo numero " << minN << " y aparecio " << minPos << endl;
 
    return 0;
}