using namespace std;
#include <iostream>
#include <cmath>

const int DIM = 5;

bool confrontaArray(char[],char[]);
void copiaArray(char[],char[]);
void stampaArray(char a[]);


int main(){
  char a[] = {'a','b','c','d','e'};
  char b[DIM];
  bool uguali = true;

  stampaArray(a);
  stampaArray(b);

  if (confrontaArray(a,b)) {
    cout << "Array uguali"<<endl;
  }
  else
  {
    cout << "Array diversi"<<endl;
  }

  copiaArray(a,b);

  stampaArray(a);
  stampaArray(b);

  if (  confrontaArray(a,b)) {
    cout << "Array uguali"<<endl;
  }
  else
  {
    cout << "Array diversi"<<endl;
  }
  return 0;
}


bool confrontaArray(char a [] ,char b[] ){

  bool risultato = true;

  for (int i = 0; i < DIM; i++) {
    if (a[i]!=b[i]) {
      return false;
    }
  }
  return risultato;
}

void copiaArray(char a [],char b []){

  for (int i = 0; i < DIM; i++) {
    b[i]=a[i];
  }

}

void stampaArray(char a[]){
  for (int i = 0; i < DIM; i++) {
    cout << "a [" << i << "] = "<< a[i] << endl;
  }
}
