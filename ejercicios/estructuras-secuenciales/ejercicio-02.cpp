/*
 * 2. Leer dos números por teclado e imprimir:
 *   - La suma de ambos
 *   - La resta (el primero menos el segundo)
 *   - La multiplicación
 *   - La división
 */
#include <iostream>

using namespace std;

int main()
{
    int numeroA;
    int numeroB;
    
    cout << "Ingrese un número: ";
    cin >> numeroA;

    cout << "Ingrese otro número: ";
    cin >> numeroB;

    cout << "La suma " << numeroA + numeroB << endl;
    cout << "La resta " << numeroA - numeroB << endl;;
    cout << "La multiplicación " << numeroA * numeroB << endl;;
    cout << "La división " << (float) numeroA / (float) numeroB << endl;;
 
    return 0;
}