/*
 * 31. Por cada alumno que rindió un examen de inglés se lee el número de 
 *     padrón, y la nota obtenida. Se desea saber la cantidad de alumnos que 
 *     rindieron el examen y el porcentaje de alumnos que obtuvieron cada nota.
 */

#include <iostream>
using namespace std;

struct Alumno {
  int padron;
  int nota;
};

void cargarAlumnos(Alumno *vector, int size)
{
  for (int i=0; i < size; i++) { 
    cout << "Ingrese el padron del alumno " << i << endl;
    cin >> (vector+i)->padron;
    cout << "Ingrese la nota del alumno " << i << endl;
    cin >> (vector+i)->nota;
  }
}

void estadisticas(Alumno *alumnos, int size, float *porcentajes)
{
  int frecuencias[11]={0,0,0,0,0,0,0,0,0,0,0};
  for (int i=0; i < size; i++) { 
    frecuencias[(alumnos+i)->nota]++;
  }

  for (int j=0; j < 11; j++) {
    *(porcentajes+j) = 100.0 * (float) frecuencias[j] / size;
  }
}

void mostrar(float *vector, int size) {
  cout << "{ ";
  for (int i=0; i < size; i++) {
    if (*(vector+i) != 0) {
      cout << "Nota " << i << " en "<< *(vector+i) << "%";
      if (i<size-1)
        cout << ", ";
    }
  }
  cout << " }" << endl;
}

int main() {
  int cantidad = 0;
  Alumno *alumnos;
  float porcentajes[11]={0,0,0,0,0,0,0,0,0,0,0};

  cout << "Ingrese la cantidad de alumnos que rindieron examen de ingles." << endl;
  cin >> cantidad;
  
  alumnos = new Alumno[cantidad];

  cargarAlumnos(alumnos, cantidad);
  
  estadisticas(alumnos, cantidad, porcentajes);
  
  cout << "La cantidad de alumnos que rindieron el examen es " << cantidad << endl;
  cout << "Las estadisticas es ";
  mostrar(porcentajes, 11);
  cout << endl;

  delete [] alumnos;
  return 0;
}

