/*
 * 16. Dada una serie de números reales, determinar el valor máximo, el mínimo 
 *     y las posiciones en que estos se encontraban en la serie. El programa 
 *     deberá ir preguntando si hay más números para ingresar.
 */
#include <iostream>
#include <cstdio>

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