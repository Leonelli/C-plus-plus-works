using namespace std;
#include <iostream>


double fatt(double x);
double pot(double x,int n);
double my_sen(double x,int n);



int main(){
  cout << fatt(5)<<endl;
  cout << pot (3,4)<<endl;
  cout << my_sen(3,2)<<endl;
  return 0;
}


double fatt(double x){
  if (x==0.0) {
    return 1.0;
  }
  else{
    return x*fatt(x-1);

  }
}
double pot(double x,int n){
  if (n==0) {
    return 1.0;
  }
  else{
    return x*pot(x,n-1);
  }
}

double my_sen(double x,int n){
  if(n<0){
    return 0.0;
  }
  else{
    return my_sen(x,n-1)+(pot(-1,n)/fatt(2*n+1))*pot(x,2*n+1);
  }
}
