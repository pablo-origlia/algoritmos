/*
 * 37. Escribir un programa que calcule la traza de una matriz cuadrada. 
 *     Recordar que la traza de una matriz es la suma de los elementos de su 
 *     diagonal principal.
 */

#include <iostream>
#include <cmath>

using namespace std;

int trazaMatriz(int *matriz, int filas, int columnas) {
  int traza = 0;
 
  for (int i = 0; i < filas*columnas; i+=(columnas+1)) {
    traza += *(matriz+i);
  }
  return traza;
}

int main() {
  // cantidad maxima de elementos por fila o columna.
  const int MAX = 10;
  
  int filas;
  int columnas;
  /*
  int matrizA[MAX*MAX];
  int matrizB[MAX*MAX];
  
  
  cout << "Ingrese la cantidad de filas " << endl;
  cin >> filas;
  cout << "Ingrese la cantidad de columnas" << endl;
  cin >> columnas;
  */
  int *matrizRes;
  
  filas = 3;
  columnas = 3;
  
  int matrizA[]={ 1,2,3,
                  4,5,6,
                  7,8,9
                };
  
  cout << "== Traza Matriz de A ==" << trazaMatriz(matrizA, filas, columnas) << endl;

  return 0;
}
