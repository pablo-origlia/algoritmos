/*
 * 14. Leer un número N y calcular su factorial.
 */
#include <iostream>

using namespace std;

long double factorial1(int n) {
    return (n==1)? 1 : (n * factorial1(n-1));
}

long double factorial2(int n) {
    long double fac = 1;
    for (int i=0; i<n; i++) {
        fac *= (i+1);
    }
    return fac;
}

int main()
{
    int numero;

    cout << "Ingrese un numero entero: ";
    cin >> numero;
    
    cout << factorial1(numero) << endl;

    cout << factorial2(numero) << endl;

    return 0;
}