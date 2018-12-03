using namespace std;
#include <iostream>

const int SIZE = 3;

void stampaMatrice(const int[SIZE][SIZE]);
double media(const int matrice[SIZE][SIZE]);
double somma(const int matrice[SIZE][SIZE]);

double mediaRic(const int matrice[SIZE][SIZE]);
double sommaRic(const int matrice[SIZE][SIZE]);


int main(){
  int a[SIZE][SIZE]={{0,2,3},{4,5,6},{8,10,12}};
  stampaMatrice(a);
  cout<< "Media: " << media(a) <<endl;
  return 0;

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



double somma(const int matrice[SIZE][SIZE]){
  double somma=0;
  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
      somma+=matrice[i][j];
      }
    }
  return somma;
}

double sommaRic(const int matrice[SIZE][SIZE]){
  double res=0;
  int riga=SIZE-1;
  int colonna=SIZE-1;
  if (colonna==0 && riga==0) {
    res = 0;
  }
  else{
    res = sommaRic(matrice[riga][colonna]);
    riga--;
    colonna--;
  }
  return res;
}



double media(const int matrice[SIZE][SIZE]){
  double media = sommaRic(matrice)/(SIZE*SIZE);
  return media;
}
