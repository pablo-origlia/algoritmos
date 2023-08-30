/*
 * 28. Escribir una función que devuelva el máximo común divisor y el mínimo 
 *     común múltiplo entre dos enteros. 
 *
 *     Nota: cuidado al modularizar (recordar que una función solo tiene que 
 *           realizar una tarea).
 */

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int dividir(int a, int b) {
	int r = a%b;

	if (r == 0) {
		return b;
	} else {
		return dividir(b, r);
	}
}

int mcd(int a, int b) {
	if (a < b) {
		swap(a, b);
	}
    return dividir(a, b);
}

int mcm(int a, int b) {
	return abs(a*b)/mcd(a,b);
}

int main() {
  cout << mcd(114, 288) << endl;
  
  cout << mcm(114, 288) << endl;
  return 0;
}