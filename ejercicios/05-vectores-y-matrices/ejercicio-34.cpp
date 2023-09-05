/*
 * 34. Si los números de un vector representan los coeficientes de un polinomio 
 *     (de grado no mayor a 10), escribir un algoritmo que calcule la especialización 
 *     de ese polinomio con un número que elige el usuario.
 */

#include <iostream>
#include <cmath>

using namespace std;

int calcular(int *coeficientes, int tamanio, int numero) {
  int resultado = 0;
  
  for (int i = 0; i < tamanio; i++) {
    resultado += (*(coeficientes+i)) * pow(numero,i);
  }
  return resultado;
}

int main() {
  int vectorA[] = {3,5,2,6,9};
  int vectorB[] = {9,3,9,2,5,6,6,5,4,8,3,7,6,7,8};

  int sizeA = sizeof(vectorA)/sizeof(vectorA[0]);
  
  cout << "== Polinomio ==" << endl;

  for (int i = 0; i < sizeA; i++) {
    cout << vectorA[i] << "x^"<< i << " + ";
  }

  cout << "== Valor ==" << calcular(vectorA, sizeA, 3) << endl;
  
  return 0;
}
