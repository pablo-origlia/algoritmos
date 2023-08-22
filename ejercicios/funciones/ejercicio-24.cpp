/*
 * 24. Hacer una función que, dado los coeficientes de un polinomio de segundo
 *     grado (3 números reales), indique si tiene o no raíces reales, 
 *     devolviendo un valor booleano.
 */

#include<iostream>
#include<cmath>

using namespace std;
  
bool tieneRaicesReales(float a, float, b, float c) {
	return (pow(b,2)-(4*a*c) >= 0);
}

int main()
{
	return 0;
}