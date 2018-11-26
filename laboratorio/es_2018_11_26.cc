using namespace std;
#include <iostream>
#include <cmath>

const int DIM = 5;

bool confrontaArray(const char[],const char[]);
void copiaArray(char dest[],const char source[]);
void stampaArray(const char a[],const char b[]);


int main(){
  char a[] = {'a','b','c','d','e'};
  char b[DIM];
  bool uguali = true;

  stampaArray(a,b);

  if (confrontaArray(a,b)) {
    cout << "Array uguali"<<endl;
  }
  else
  {
    cout << "Array diversi"<<endl;
  }

  copiaArray(b,a);

  stampaArray(a,b);

  if (  confrontaArray(a,b)) {
    cout << "Array uguali"<<endl;
  }
  else
  {
    cout << "Array diversi"<<endl;
  }
  return 0;
}


bool confrontaArray(const char a [] ,const char b[] ){

  bool risultato = true;

  for (int i = 0; i < DIM && risultato==true; i++) {
    if (a[i]!=b[i]) {
      return false;
    }
  }
  return risultato;
}

void copiaArray(char a [],const char b []){

  for (int i = 0; i < DIM; i++) {
    a[i]=b[i];
  }

}

void stampaArray(const char a[], const char b[]){
  for (int i = 0; i < DIM; i++) {
    cout << "a [" << i << "] = "<< a[i] << endl;
    cout << "b [" << i << "] = "<< b[i] << endl;
  }
}
