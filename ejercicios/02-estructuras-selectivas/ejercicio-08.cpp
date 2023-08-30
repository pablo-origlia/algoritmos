/*
 * 8. Escribir un algoritmo que determine si un número es par.
 */
#include <iostream>

using namespace std;

int unidad(int numero) {
    return numero % 10;
}

bool esPar(int numero) {
    int pares[] = {0,2,4,6,8};
    int digito = unidad(numero);
    for (int i=0; i<5; i++) {
        if (digito == pares[i]) {
            return true;
        }
    }
    return false;
}

int main()
{
    int numero;

    cout << "Ingrese un número entero: ";
    cin >> numero;

    cout << "El número es " << (esPar(numero)? "par": "impar") << endl;

    cout << "El número es " << ((numero % 2)? "impar": "par") << endl;

    return 0;
}