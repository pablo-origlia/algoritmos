/*
 * 21. Escribir un algoritmo que lea una serie de números reales y verifique 
 *     si están ordenados en forma ascendente, descendente o si no están 
 *     ordenados, informando por pantalla.
 */
#include <iostream>

using namespace std;

bool esAscendente(int numeros[], int tamanio) {
    for (int i = 0; i < tamanio-1; ++i) {
        if (numeros[i] > numeros[i+1]) {
            return false;
        }
    }
    return true;
}

bool esDescendente(int numeros[], int tamanio) {
    for (int i = 0; i < tamanio-1; ++i) {
        if (numeros[i] < numeros[i+1]) {
            return false;
        }
    }
    return true;
}

int main() {
    
    //int numeros[7] = {1,2,30,41,15,65,222};
    //int numeros[7] = {1,2,30,41,51,65,222};
    int numeros[7] = {1000,200,30,24,15,6,2};

    if (!esAscendente(numeros, 7) && !esDescendente(numeros, 7)) {
        cout << "Serie de numeros desordenados." << endl;
    }
    else if (esAscendente(numeros, 7)) {
        cout << "Serie de numeros ascendente." << endl;
    }
    else if (esDescendente(numeros, 7)) {
        cout << "Serie de numeros desendente." << endl;
    }
    return 0;
}