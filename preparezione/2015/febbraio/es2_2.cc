using namespace std;
#include <iostream>
#include <cmath>

double calcola_norma_ricorsivo(int * vett, int dim);
double * normalizza(int * vett, int dim);


#include <iostream>
  #include "array.h"     /* leggi, stampa, MAX_DIM */
  using namespace std;
  // Inserire qui sotto le DICHIARAZIONI delle funzioni
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
double calcola_norma_ricorsivo(int * vett, int dim){
  double somma = 0.0;
  return wrapper(vett,0,dim,somma);
}

double wrapper(int * vett, int i, int dim,double somma){
  if (i==dim) {
    return sqrt(somma);
  }
  else{
    somma+=vett[i]*vett[i];
    i++;
    wrapper(vett,i,dim,somma);
  }
}

double * normalizza(int * vett, int dim){

}
