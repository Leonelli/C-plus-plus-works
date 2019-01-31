using namespace std;
#include <iostream>

int * crea_vettore(int n);
void triangolare(int vett[],int n,int i);
void stampa_vett(int vett[],int n);

int main(){
  int n;
  cout << "n: ";
  cin >>n;

  int * vett = crea_vettore(n);

  stampa_vett(vett,n);
}

int * crea_vettore(int n){
  int * vett = new int [n];
  triangolare(vett,n,0);
  return vett;
}

void stampa_vett(int vett[],int n){
  for (int i = 0; i < n; i++) {
    cout << "vettore"<<i<<": "<<vett[i]<<endl;
  }
}

void triangolare(int vett[],int n,int i){
  if (n<=i) {
    return;
  }
  else{
    vett[i]=i*(i+1)/2;
    i++;
    triangolare(vett,n,i);
  }
}
