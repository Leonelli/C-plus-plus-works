using namespace std;
#include <iostream>

int somma_prodotto_incrociato(int * primo,int * secondo,int dim);
int wrapper(int * primo,int * secondo,int i,int j,int dim,int a);
int main(){
 int a[] ={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 int b[] ={1, 1, 2, 3, 5, 8, 13, 21, 34, 55};
 //res=364;
 cout << somma_prodotto_incrociato(a,b,10)<<endl;

}

int somma_prodotto_incrociato(int * primo,int * secondo,int dim){
  int a;
  a = wrapper(primo,secondo,0,dim-1,dim,0);
  return a;
}

int wrapper(int * primo,int * secondo,int i,int j,int dim,int a){
  if (i==dim) {
    return a;
  }
  else{
    a+= primo[i]*secondo[j];
    i++;
    j--;
    wrapper(primo,secondo,i,j,dim,a);
  }
}
