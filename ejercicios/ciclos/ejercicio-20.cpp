/*
 * 20. Dada una serie de nombres con sus salarios respectivos, determinar 
 *     el salario máximo, el mínimo y la persona que percibe cada uno.
 */
#include <iostream>

using namespace std;

struct Empleado {
    string nombre;
    float salario;
};

int main()
{   
    Empleado empleado;
    Empleado empleadoSueldoMinimo;
    Empleado empleadoSueldoMaximo;

    cout << "Ingrese el nombre del empleado, 0 para finalizar." << endl;
    cin >> empleado.nombre;

    cout << "Ingrese el sueldo del empleado " << endl;
    cin >> empleado.salario;

    empleadoSueldoMinimo = empleado;
    empleadoSueldoMaximo = empleado;

    while (empleado.nombre != "0") {

        if (empleado.salario > empleadoSueldoMaximo.salario) {
            empleadoSueldoMaximo = empleado;            
        }
        if (empleado.salario < empleadoSueldoMinimo.salario) {
            empleadoSueldoMinimo = empleado;            
        }

        cout << "Ingrese el nombre del empleado, 0 para finalizar." << endl;
        cin >> empleado.nombre;

        cout << "Ingrese el sueldo del empleado " << endl;
        cin >> empleado.salario;
    }

    cout << empleadoSueldoMaximo.nombre << " es quien mas gana " << empleadoSueldoMaximo.salario << endl;
    cout << empleadoSueldoMinimo.nombre << " es quien menos gana " << empleadoSueldoMinimo.salario << endl;
    return 0;
}