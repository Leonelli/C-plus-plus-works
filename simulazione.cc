
#include <iostream>
#include <cmath>
#include <fstream>
#include <cstdlib>
#include <cstring>
using namespace std;

const int DIM=255;

//scrivere le righe inverse
//gestire se inserisce più di 4 in n_righe

int main (int argc, char * argv[]) {

  if (argc != 4) {
    cout << "Numero di argomenti errato!";
  }
  //(a) il nome di un file di testo in input;
  //(b) un numero intero “n”, corrispondente al numero di righe da leggere dal primo file;
  //(c) il nome di un file di testo in output.
  int buffer = DIM;
  char line [DIM];

  fstream myin;
  int n_righe = atoi(argv[2]);
  fstream myout;


  myin.open(argv[1],ios::in);//lettura
  myout.open(argv[3],ios::out); //scrittura

  int n = 0;

  while(!myin.fail() && n_righe>n){
    myin.getline(line,DIM);
    for (int i = 0; i < strlen(line); i++) {
      if (line[i]=='\t' || line[i]==' ') {
        myout << ' ';
      }
      else{
        if (i%2==0) {
          myout << "*";
        }
        else
        {
          myout << "+";
        }
      }
    }
    myout << endl;
    //myout << line << endl;
    n++;
  }

  myin.close();
  myout.close();
}
