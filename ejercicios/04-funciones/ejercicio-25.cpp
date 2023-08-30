/*
 * 25. Hacer una función que devuelva las raíces reales de un polinomio de 
 *     segundo grado y además indique si tiene o no raíces reales. 
 *     Nota: utilizar la función realizada en el ejercicio 24. 
 *     Si no tuviera raíces reales, devolverá 0 en ambas.
 *
 * 24. Hacer una función que, dado los coeficientes de un polinomio de segundo
 *     grado (3 números reales), indique si tiene o no raíces reales, 
 *     devolviendo un valor booleano.
 */

#include<iostream>
#include<cmath>

using namespace std;

struct Respuesta {
	float x1;
	float x2;
	bool tieneRaicesReales;
};
  
bool tieneRaicesReales(float a, float b, float c) {
	return (pow(b,2)-(4*a*c) >= 0);
}

Respuesta raicesSegundoGrado(float a, float b, float c) {
	Respuesta rta;
	float delta;
	rta.tieneRaicesReales = tieneRaicesReales(a, b, c);
	if (rta.tieneRaicesReales)
	{
		delta = pow(b,2)-(4*a*c);
		rta.x1 = (((-1) * b) + sqrt(delta)) / (2*a);
		rta.x2 = (((-1) * b) - sqrt(delta)) / (2*a);
	} else {
		rta.x1 = 0;
		rta.x2 = 0;
	}
	return  rta;
}

int main()
{
	return 0;
}