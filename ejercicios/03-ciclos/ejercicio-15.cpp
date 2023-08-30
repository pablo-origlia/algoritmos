/*
 * 15. Leer una serie de números reales, terminando la serie con un cero. 
 * Imprimir los datos a medida que se los ingresa junto con la suma parcial 
 * de los mismos.
 */
#include <iostream>

using namespace std;

int main()
{
    int numero;
    int suma = 0;

    cout << "Ingrese un numero entero: " << endl;
    cout << "numero\tsuma" << endl;
    cin >> numero;

    while (numero != 0) {
        suma += numero;
        cout << "\t" << suma << endl;
        cin >> numero;
    }

    return 0;
}