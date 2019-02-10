using namespace std;
#include <iostream>
#include <fstream>

float ** LeggiMatrice(fstream &in, int r, int c);

int main(int argc, char const *argv[]) {
  fstream in;
  in.open(argv[1],ios::in);
  char numero [20];
  cout << argv[1]<<endl;
  int tmp_r;
  int tmp_c;
  in>>tmp_r;
  cout << tmp_r << endl;
  in>>tmp_c;
  cout << tmp_c << endl;

  float ** matrice = LeggiMatrice(in,tmp_r,tmp_c);



  for (int i = 0; i < tmp_r; i++) {
    for (int j = 0; j < tmp_c; j++) {
      cout << matrice[i][j]<<" ";
    }
    cout <<endl;
  }


  in.close();
  return 0;
}


float ** LeggiMatrice(fstream &in, int r, int c){

  float ** matrice = new float*[r];
  for (int i = 0; i < r; i++) {
    matrice[i]= new float[c];
  }

  int index_righe = 0;
  int index_colonne = 0;

  float d;
  in>>d;
  while (!in.eof()) {
    if (index_colonne==c) {
      index_colonne=0;
      index_righe++;
    }
    matrice[index_righe][index_colonne]=d;
    index_colonne++;
    in>>d;
  }
  return matrice;
}
