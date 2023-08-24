/*
 * 27. Hacer una función que indique si un número es primo o no.
 *
 */

#include <iostream>
using namespace std;

bool esPrimo(int numero) {
	for(int i=numero-1; i>1;i--) {
		if (numero%i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
  cout << "Hello World!";
  for (int i=0;i<100;i++) {
  	cout << "El numero " << i << (esPrimo(i)? " es " : " no es ") << " primo" << endl;
  }
  return 0;
}