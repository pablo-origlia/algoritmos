/*
 * 3. Escribir un programa que lea el nombre de una persona y luego lo salude.
 */
#include <iostream>

using namespace std;

int main()
{
    string nombre;
    
    cout << "Ingrese su nombre: ";
    cin >> nombre;

    cout << "🖐️  Hola" << nombre;
 
    return 0;
}