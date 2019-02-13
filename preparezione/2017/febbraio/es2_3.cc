using namespace std;
#include <iostream>

void stampa_vett(int vett[],int n);
int * crea_vettore(int n);
int * esagonale (int * vett,int i,int n);

int main(){
  int * out = crea_vettore(7);
  stampa_vett(out,10);
  return 0;
}

int * crea_vettore(int n){
  int * vett = new int[n];
  return esagonale(vett,0,n);
}

int * esagonale (int * vett,int i,int n) {
  if (i==n) {
    return vett;
  }
  else{
    vett[i]=i*(2*i-1);
    i++;
    esagonale(vett,i,n);
  }
}

void stampa_vett(int vett[],int n){
  for (int i = 0; i < n; i++) {
    cout << "vettore"<<i<<": "<<vett[i]<<endl;
  }
}
