using namespace std;
#include <iostream>


void quadratoArray(const int [], long[] , int);

int main(){
  const int DIM=5;
  int a[]= {0,1,2,3,4000};

  long b[DIM] = {0l};

  quadratoArray(a,b,DIM);

  for (int i = 0; i < DIM; i++) {
    cout << "b[" << i << "] = " << b[i]<<endl;
  }

  return 0;
}

void quadratoArray(const int a[], long b[], int dim){
  for (int i = 0; i < dim; i++) {
    b[i]=a[i]*a[i];
  }
}
