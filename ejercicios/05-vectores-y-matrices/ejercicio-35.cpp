/*
 * 35. Escribir un algoritmo que halle una matriz C como suma de dos matrices 
 *     A y B. La dimensión de las matrices de M × N se lee como dato (suponer 
 *     un MAX para fila y columna).
 */

#include <iostream>
#include <cmath>

using namespace std;


/********************
 * Del ejercicio 30.
 */
void cargarElementosVector(int *vector, int size)
{
  for (int i=0; i < size; i++) { 
    cout << "Ingrese el elemento " << i <<" del vector: " << endl;
    cin >> *(vector+i);
  }
}

void suma(int *vectorA, int *vectorB, int *vectorSuma, int size)
{
  for (int i=0; i < size; i++) {
    *(vectorSuma+i) = *(vectorA+i) + *(vectorB+i);
  }
}

/********************
 * Del ejercicio 30.
 */

int size(int *vector) {
  return sizeof(vector)/sizeof(vector[0]);
}

void cargarMatriz(int *matriz, int filas, int columnas) {
  cargarElementosVector(matriz, filas*columnas);
}

void sumarMatrices(int *matrizA, int *matrizB, int *matrizRes, int filas, int columnas) {
	suma(matrizA, matrizB, matrizRes, filas*columnas);
}

void mostrarMatriz(int *matriz, int filas, int columnas) {
  for (int i=0; i < filas*columnas; i++) {
    cout << *(matriz+i);
    cout << " ";
    if ((i+1)%filas == 0 ) {
      cout << endl;
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
  
  int matrizA[]={1,2,3,4,5,6,7,8,9};
  int matrizB[]={1,2,3,4,5,6,7,8,9};
  
  matrizRes = new int[filas*columnas];
  
  cargarMatriz(matrizA, filas, columnas);
  cargarMatriz(matrizB, filas, columnas);
  
  sumarMatrices(matrizA, matrizB, matrizRes, filas, columnas);
  
  cout << "== Suma de A+B ==" << endl;
  
  mostrarMatriz(matrizRes,filas,columnas);

  
  return 0;
}
