/*
 * 10. Leer dos números y luego una opción que puede ser “ + ”: suma, 
 * “ – “: resta, “ * ”: multiplicación o “ / “: división. Según la opción 
 * elegida realizar el cálculo.
 */
#include <iostream>

using namespace std;

int calcular(int a, int b, char op) {
    int result = 0;
	switch (op) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;            
    }
    return result;
}

int main()
{
    int numeroM;
    int numeroN;
    char operador;

    cout << "Ingrese un número entero: ";
    cin >> numeroM;

    cout << "Ingrese otro número entero: ";
    cin >> numeroN;

    cout << "Seleccione una opción que puede ser\n+: suma\n–: resta\n*: multiplicación\n/: división." << endl;
    cin >> operador;
 
    cout << "El resultado es " << calcular(numeroM, numeroN, operador) << endl;

    return 0;
}