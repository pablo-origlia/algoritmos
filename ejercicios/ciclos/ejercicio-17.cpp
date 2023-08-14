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
    int pos;
    int maxPos;
    int minPos;
    bool loop = true;
    char tecla;

    cout << "Ingrese un numero entero: ";
    cin >> numero;

    maxN = minN = numero;
    maxPos = maxPos = pos = 1;

    while (loop) { 
        if(maxN < numero) {
            maxN = numero;
            maxPos = pos;
        }
        if(minN > numero) {
            minN = numero;
            minPos = pos;
        }

        cout << "Desea ingresar otro numero? (S/N)" << endl;
        cin >> tecla;

        if(tecla == 'N' || tecla == 'n') {
            loop = false;
        } else {
            cin >> numero;
            pos++;
        }           
    }

    cout << "El maximo numero " << maxN << " en la posicion " << maxPos << endl;
    cout << "El minimo numero " << minN << " en la posicion " << minPos << endl;

    return 0;
}