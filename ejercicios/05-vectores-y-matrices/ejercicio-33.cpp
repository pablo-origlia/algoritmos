/*
 * 33. Se leen dos vectores A y B, de N y M elementos respectivamente. 
 *     Construir un algoritmo que halle los vectores unión e intersección de A 
 *     y B. Previamente habrá que ordenarlos.
 */

#include <iostream>

using namespace std;

int convertirEnSet(int *vector, int tamanio, int *conjunto) {

  int ocurrencias;
  int cursor = 0;
  int elemento;
   
  for (int i = 0; i < tamanio; i++) {
    elemento = *(vector+i);
    ocurrencias = 0;

    for (int j = i; j < tamanio; j++) {
      if (elemento == *(vector+j)) {
        ocurrencias++;
      }
    }
    if (ocurrencias == 1) {
      conjunto[cursor] = elemento;
      cursor++;
    }
  }
  return cursor;
}

void ordenar(int *vector, int tamanio)
{
  for (int i = 0; i < (tamanio-1); i++) {
    for (int j = 0; j < (tamanio-i-1); j++) {
      if (*(vector+j) > *(vector+j+1)) {
        swap(*(vector+j), *(vector+j+1));
      }
    }
  }
}

int interseccionAB(int *conjuntoA, int cursorA, int *conjuntoB, int cursorB, int *interseccion) {
  int ocurrencias;
  int cursor = 0;
  int elemento;
  
  for (int i = 0; i < cursorA; i++) {
    elemento = *(conjuntoA+i);
    ocurrencias = 0;

    for (int j = 0; j < cursorB; j++) {     
      if (elemento == *(conjuntoB+j)) {
        ocurrencias++;
      }
    }
    
    if (ocurrencias == 1) {
      *(interseccion+cursor) = elemento;
      cursor++;
    }
  }
  return cursor;	
}

int unionAB(int *conjuntoA, int cursorA, int *conjuntoB, int cursorB, int *unionDeAB) {
  int ocurrencias;
  int cursor = 0;
  int elemento;
  int *suma = new int[cursorA+cursorB];
  
  for (int i = 0; i < cursorA; i++) {
    *(suma+i) = *(conjuntoA+i);
  }
  
  for (int i = 0; i < cursorB; i++) {
    *(suma+cursorA+i) = *(conjuntoB+i);
  }
  
  cursor = convertirEnSet(suma, cursorA+cursorB, unionDeAB);
  
  return cursor;
}


int main() {
  int vectorA[] = {3,2,3,1,2,1,3,3,2,2,1};
  int vectorB[] = {9,3,9,2,5,6,6,5,4,8,3,7,6,7,8};

  int sizeA = sizeof(vectorA)/sizeof(vectorA[0]);
  int sizeB = sizeof(vectorB)/sizeof(vectorB[0]);

  int conjuntoA[sizeA];
  int conjuntoB[sizeB];

  int cursorA = 0;
  int cursorB = 0; 

  cursorA = convertirEnSet(vectorA, sizeA, conjuntoA);
  cursorB = convertirEnSet(vectorB, sizeB, conjuntoB);

  ordenar(conjuntoA, cursorA);
  ordenar(conjuntoB, cursorB);

  cout << "== Vector A ==" << endl;

  for (int i = 0; i < sizeA; i++) {
    cout << vectorA[i] << endl;
  }

  cout << "== Vector B ==" << endl;

  for (int i = 0; i < sizeB; i++) {
    cout << vectorB[i] << endl;
  }

  cout << "== Set A ==" << endl;
  
  for (int i = 0; i < cursorA; i++) {
    cout << conjuntoA[i] << endl;
  }

  cout << "== Set B ==" << endl;
  
  for (int i = 0; i < cursorB; i++) {
    cout << conjuntoB[i] << endl;
  }

  int *interseccion = new int[cursorA+cursorB];
  int nInter;

  nInter = interseccionAB(conjuntoA, cursorA, conjuntoB, cursorB, interseccion);

  cout << "== Set Intersecc ==" << endl;
  
  for (int i = 0; i < nInter; i++) {
    cout << interseccion[i] << endl;
  }

  int *unionDeAB = new int[cursorA+cursorB];
  int nUnion;

  nUnion = unionAB(conjuntoA, cursorA, conjuntoB, cursorB, unionDeAB);

  cout << "== Set Union ==" << endl;
  
  for (int i = 0; i < nUnion; i++) {
    cout << unionDeAB[i] << endl;
  }


  return 0;
}
