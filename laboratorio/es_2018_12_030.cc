using namespace std;
#include <iostream>

const int SIZE = 3;

void stampaMatrice(const int[SIZE][SIZE]);
void stampaVettore(const int d[SIZE]);
void diagonalePrincipale(const int a[SIZE][SIZE], int d[SIZE]);

int main(){
  int a[SIZE][SIZE]={{0,1,3},{3,5,6},{8,10,12}};
  int v[SIZE];
  stampaMatrice(a);
  diagonalePrincipale(a,v);
  cout<< "diagonale Principale: " <<endl;
  stampaVettore(v);
  return 0;

}

void stampaVettore(const int array[]){
  for (int i = 0; i < SIZE; i++) {
    cout << array[i] << "\t";
  }
  cout << endl;
}


void stampaMatrice(const int matrice[SIZE][SIZE]){
  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
      cout << matrice[i][j] << "\t";
    }
    cout << endl;
  }
  cout << endl;
}

void diagonalePrincipale(const int a[SIZE][SIZE], int d[]){
  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
      if (i==j) {
        d[i]=a[i][j];
      }
    }
  }
}
