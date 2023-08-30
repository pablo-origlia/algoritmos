/*
 * 32. Se carga un vector X de N elementos enteros. Escribir un algoritmo que 
 *     devuelva un vector que tenga todos los elementos de X, pero sin 
 *     elementos repetidos.
 */

#include <iostream>
using namespace std;

struct Set {
  int *numeros;
  int cantidad;
};

void convertirEnSet(int *numeros, int cantidad, Set *rta) {
  
  for (int i=0; i<cantidad; i++) {
    for (int j=0; j<) {
    }
  }
}

int main() {
  int *numeros;
  int cantidad;

  cout << "Cuantos elementos tiene el vector?" << endl;
  cin >> cantidad;

  numeros = new int[cantidad];
  cargarVector(numeros, cantidad);

  convertirEnSet(numeros, cantidad);
  return 0;
}

