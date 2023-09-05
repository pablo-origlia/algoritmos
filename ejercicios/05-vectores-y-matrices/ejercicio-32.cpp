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

int main() {
  int vector[] = {1,1,2,3,3,2,5,4,5,1};
  int size = sizeof(vector)/sizeof(vector[0]);
  int conjunto[size];
  int cursor = 0;
 
  cursor = convertirEnSet(vector, size, conjunto);

  cout << "== Vector ==" << endl;

  for (int i = 0; i < size; i++) {
    cout << vector[i] << endl;
  }

  cout << "== Set ==" << endl;
  
  for (int i = 0; i < cursor; i++) {
    cout << conjunto[i] << endl;
  }

  cout << "== Tamanio: "<< cursor <<" ==" << endl;
  
  return 0;
}
