using namespace std;
#include <iostream>


void somma_array(int n1[], int n2[], int risultato[], int dim);
int * somma(int n1[], int n2[],int risultato[],int dim,int i);

int main(){
  const int DIM=3;
  int n1[DIM]={9, 3, 5};
  int n2[DIM]={1, 4, 7};
  int ris[DIM];

  somma_array(n1,n2,ris,DIM );

  for (int i = 0; i < DIM; i++) {
    cout << " ris["<<i<<"]=  "<<ris[i]<<endl;
  }

  return 0;
}


void somma_array(int n1[], int n2[], int risultato[], int dim){
  risultato=somma(n1,n2,risultato,dim,0);
}

int * somma(int n1[], int n2[],int risultato[],int dim,int i){
  if (i<dim) {
    risultato[i]=n1[i]+n2[i];
    i++;
    somma(n1,n2,risultato,dim,i);
  }
  else{
    return risultato;
  }
}
