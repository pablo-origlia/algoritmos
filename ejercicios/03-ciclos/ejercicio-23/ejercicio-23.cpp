/*
 * 23. Leer N y luego N lotes de números reales que terminan con un valor 0, 
 *     y calcular la media individual de cada lote, junto con la media total de 
 *     todos los números ingresados.
 */
#include <iostream>
#include "Media.h"

using namespace std;

int main() {
    int lotes = 0;
    float dato = 0;
    Media mediaTotal = Media();
    Media *mediaParcial;

    cout << "Ingrese el numero de lotes: ";
    cin >> lotes; 

    for(int i=0; i<lotes; i++) {
        mediaParcial = new Media();
        cout << "Ingrese los numero reales del lotes, 0 para terminar: " << endl;
        cin >> dato;
        while (dato != 0.0) {
            mediaParcial->sumar(dato);
            mediaTotal.sumar(dato);
            cin >> dato;
        }
        cout << "La media de este lote es: " << mediaParcial->getMedia() << endl;
        delete mediaParcial;
    }
    cout << "La media de todos los lotes es: " << mediaTotal.getMedia() << endl;
    return 0;
}