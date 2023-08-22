/*
 * 26. Hacer un programa principal en donde se pida al usuario ingresar los 
 *     coeficientes de la cuadrática, e indicar si tiene o no raíces, y cuáles 
 *     son en caso de tener, utilizando la función definida.
 *
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
		rta.x1 = (((-1) * b) + delta) / (2*a);
		rta.x2 = (((-1) * b) - delta) / (2*a);
	} else {
		rta.x1 = 0;
		rta.x2 = 0;
	}
	return  rta;
}

int main()
{
	float a,b,c;
	Respuesta rta;
	cout << "Ingrese los coeficientes de la ecuación cuadrática (a, b y c) de: ax^2 + bx + c" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	rta = raicesSegundoGrado(a,b,c);
	if (rta.tieneRaicesReales) {
		cout << "Tiene raices reales y son:" << endl;
		cout << "x1 = " << rta.x1 << endl;
		cout << "x2 = " << rta.x2 << endl;
	}
	else {
		cout << "No tiene raices reales." << endl;
	}
	return 0;
}