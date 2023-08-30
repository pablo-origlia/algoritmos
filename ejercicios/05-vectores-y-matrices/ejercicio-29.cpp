/*
 * 29. Desarrollar una función que devuelva en un vector los números primos 
 *     entre 2 y 200. Reutilizar lo que ya se escribió y probó.
 *
 */

#include <iostream>
using namespace std;

bool esPrimo(int numero) {
  for(int i=numero-1; i>1; i--) {
    if (numero%i == 0) {
      return false;
    }
  }
  return true;
}

int primosEntre(int a, int b, int vec[], int size) {
  int i=0;
  for (int n=a; n<=b; n++) {
    if (esPrimo(n)) {
      vec[i] = n;
      i++;
      if (i > size-1) {
        return -1;
      }
    }
  }
  return i;
}

int main() {
  int vec[47];
  int cantidad = 0;

  cantidad = primosEntre(2, 200, vec, 47);

  if (cantidad < 0) {
    cout << "Tamaño de vector pequeño" << endl;
  } else {
    for (int i=0;i<cantidad;i++) {
      cout << vec[i] << endl;
    }
  }
  return 0;
}
