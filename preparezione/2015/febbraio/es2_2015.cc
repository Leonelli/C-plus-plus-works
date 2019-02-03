#include <iostream>
#include "array.h"     /* leggi, stampa, MAX_DIM */
using namespace std;
// Inserire qui sotto le DICHIARAZIONI delle funzioni
double* normalizza(int * array, int dim);


int main() {
  int array[MAX_DIM];
  int dim;
  leggi(array, dim);
  double* normalizzato = normalizza(array, dim);
  cout << "Array normalizzato: " << endl;
  stampa(normalizzato, dim);
  return 0;
}
// Inserire qui sotto le DEFINIZIONI delle funzioni
void leggi(int * array, int dim){
  for (int i = 0; i < dim; i++) {
    cout << array[i] << endl;
  }
}

void stampa(double * normalizzato, int dim){
  for (size_t i = 0; i < dim; i++) {
    cout << normalizzato[i];
  }
}

double* normalizza(int * array, int dim){

}
