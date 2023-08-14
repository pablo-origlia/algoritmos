/*
 * 18. Leer A y B, enteros. Calcular C = A x B mediante sumas sucesivas e 
 *     imprimir el resultado.
 */
#include <iostream>

using namespace std;

int sgn(int numero) {
    if (numero > 0) return 1;
    if (numero < 0) return -1;
    return 0;
}

int producto(int numeroA, int numeroB) {
    int modB = abs(numeroB);
    int producto = 0;

    for (int i=0; i<; i++) {
        producto += numeroA;
    }
    return sgn(numeroB) * producto;
}

int main()
{   
    int numeroA;
    int numeroB;
    cout << "Ingrese un numero entero: ";
    cin >> numeroA;
    cout << "Ingrese otro numero entero: ";
    cin >> numeroB;
    cout << "El producto es: " << producto(numeroA, numeroB) << endl;

    return 0;
}