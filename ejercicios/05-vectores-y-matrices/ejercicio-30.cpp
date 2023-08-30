/*
 * 30. Dados dos vectores A y B, de N elementos cada uno, se desean calcular:
 *     a. El vector suma.
 *     b. El producto escalar.
 */

#include <iostream>
using namespace std;

void cargarElementosVector(int *vector, int size)
{
  for (int i=0; i < size; i++) { 
    cout << "Ingrese el elemento " << i <<" del vector: ";
    cin >> *(vector+i);
  }
}

void suma(int *vectorA, int *vectorB, int *vectorSuma, int size)
{
  for (int i=0; i < size; i++) {
    *(vectorSuma+i) = *(vectorA+i) + *(vectorB+i);
  }
}

int productoEscalar(int *vectorA, int *vectorB, int size)
{
  int acumulador = 0;
  for (int i=0; i < size; i++) {
    acumulador += *(vectorA+i) * *(vectorB+i);
  }
  return acumulador;
}

void mostrar(int *vector, int size) {
  cout << "{ ";
  for (int i=0; i < size; i++) {
    cout << *(vector+i);
    if(i<size-1)
      cout << ", ";
  }
  cout << " }" << endl;
}

int main() {
  int cantidad = 0;
  int *vectorA;
  int *vectorB;
  int *vectorSuma;

  cout << "Ingrese la cantidad de elementos que conforman cada vector A y B" << endl;
  cin >> cantidad;
  
  vectorA = new int[cantidad];
  vectorB = new int[cantidad];
  vectorSuma = new int[cantidad];

  cargarElementosVector(vectorA, cantidad);
  cargarElementosVector(vectorB, cantidad);

  cout << "A = ";
  mostrar(vectorA, cantidad);
  cout << "B = ";
  mostrar(vectorB, cantidad);
  
  suma(vectorA, vectorB, vectorSuma, cantidad);
  cout << "A+B = ";
  mostrar(vectorSuma, cantidad);
  
  cout << "AxB = " << productoEscalar(vectorA, vectorB, cantidad) << endl;

  delete [] vectorA;
  delete [] vectorB;
  delete [] vectorSuma;
  return 0;
}

