using namespace std;
#include <iostream>

int * shift(int vett[],int out [],int i,int j,int dim);
int * funz(int vett[],int dim,int j);

int main(){
  int vett[]={2, 17, 44, 202, 5, 13};
  int * out = funz(vett,6,3);

  for (int i = 0; i < 6; i++) {
    cout << out[i] <<" ";
  }

  return 0;
}

int * funz(int vett[],int dim,int j){
  int * out = new int [6];
  out = shift( vett, out,0,3,6);
  return out;
}



int * shift(int vett[],int out [],int i,int j,int dim){
  if (i==dim) {
    return out;
  }
  else{
    if (j>=dim) {
      out[i]=0;
    }
    else{
      out[i]=vett[j];
    }
    j++;
    i++;
    return shift( vett, out,i,j,dim);
  }
}
