/*
 * 19. Dada una serie de números enteros terminada en cero, imprimir los 
 *     tres mayores.
 */
#include <iostream>

using namespace std;

void mayoresTres(int numeroA, int *primero, int *segundo, int *tercero) {
    if (*primero == 0) {
        *primero = numeroA;
    }
    else if (*segundo == 0) {
        if(*primero < numeroA) {
            *segundo = *primero;
            *primero = numeroA;
        }
        else {
            *segundo = numeroA;
        }
    }
    else if (*tercero == 0) {
        if (*primero < numeroA) {
            *tercero = *segundo;
            *segundo = *primero;
            *primero = numeroA;
        }
        else if( *segundo < numeroA) {
            *tercero = *segundo;
            *segundo = numeroA;
        }
        else {
            *tercero = numeroA;
        }
    }
    else {
        if (*primero < numeroA) {
            *tercero = *segundo;
            *segundo = *primero;
            *primero = numeroA;
        }
        else if( *segundo < numeroA) {
            *tercero = *segundo;
            *segundo = numeroA;
        }
        else if( *tercero < numeroA) {
            *tercero = numeroA;
        }    
    }
    return;
}

int main()
{   
    int numero;
    int mayor1;
    int mayor2;
    int mayor3;

    cout << "Ingrese un numero entero, 0 para finalizar: " << endl;
    cin >> numero;

    mayor1 = 0;
    mayor2 = 0;
    mayor3 = 0;

    while (numero != 0) {
        mayoresTres(numero, &mayor1, &mayor2, &mayor3);
        cin >> numero;
    }

    cout << mayor1 << " - " << mayor2 << " - " << mayor3 << endl;
    return 0;
}