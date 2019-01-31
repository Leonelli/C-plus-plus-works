using namespace std;
#include <iostream>

void stampa_vett(int vett[],int n);
int * crea_vettore(int n);
void quadrato_perfetto(int * vett,int n,int t);


int main(){
  int n;
  cout << "n: ";
  cin >> n;
  int * vett = crea_vettore(n);
  //int vett [] = {1,2,3,4,5};
  stampa_vett(vett,n);
  return 0;
}


int * crea_vettore(int n){
 int * vett = new int[n];
 quadrato_perfetto(vett,n,0);
 return vett;
}


void quadrato_perfetto(int * vett,int n,int i){
  if (n<i) {
    return;
  }
  else{
    vett[i]=i*i;
    i++;
    quadrato_perfetto(vett,n,i);
  }
}

void stampa_vett(int vett[],int n){
  for (int i = 0; i < n; i++) {
    cout << "vettore"<<i<<": "<<vett[i]<<endl;
  }

}
