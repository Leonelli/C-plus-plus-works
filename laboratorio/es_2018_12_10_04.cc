using namespace std;
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>


int fibonacci(int n, int * array []);

int main ()
{
  int n,elemento;
  int * array[] = new int[n];

  cout << "inserisci n"<<endl;
  cin << n;

  elemento = fibonacci(n,array);
  cout << elemento << endl;
  return 0;
}

int fibonacci(int n, int * array []){
  int ris=0;
  if (n>0) {
    if (array[n-1]>0) {
      ris = array[n-1];
      else
      {
        switch (n) {
          case 1:case 2:
            array[n-1]=1
          break;
          default:
            array[n-1]=fibonacci(n-1,array)+fibonacci(n-2);
        }
        ris=array[n-1];
      }
    }
  }
  return ris;
}
