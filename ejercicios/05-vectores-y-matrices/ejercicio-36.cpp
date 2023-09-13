/*
 * 36. Escribir un algoritmo que halle un vector cuyos elementos son la suma de
 *     los elementos de cada fila de una matriz previamente ingresada.
 */

#include <iostream>
#include <cmath>

using namespace std;

void sumarFilas(int *matriz, int filas, int columnas, int* matrizRes) {
  int sumaFila = 0;
  int fila = 0;
  
  for (int i = 0; i < filas*columnas; i++) {
    sumaFila += *(matriz+i);
    if ((i+1)%filas==0) {
      *(matrizRes+fila) = sumaFila;
      fila++;
      sumaFila=0;
    }
  }
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
  int matrizB[]={1,2,3,4,5,6,7,8,9};
  
  matrizRes = new int[filas];
  
  //cargarMatriz(matrizA, filas, columnas);
  //cargarMatriz(matrizB, filas, columnas);
  
  sumarFilas(matrizA, filas, columnas, matrizRes);
  
  cout << "== Suma de Filas de A ==" << endl;

  for (int i=0; i<filas; i++) {
    cout << *(matrizRes+i) << endl;
  }

  delete matrizRes;

  return 0;
}
