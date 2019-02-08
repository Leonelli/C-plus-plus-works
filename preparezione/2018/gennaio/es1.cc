using namespace std;
#include <iostream>
#include <fstream>
#include <cstring>

const int MAXRIGA= 255;

int main(int argc, char * argv[]){
  fstream in,out;
  int n_righe;

  if (argc!=4) {
    cerr<<"Errore parametri"<<endl;
    exit(0);
  }

  in.open(argv[1],ios::in);
  out.open(argv[3],ios::out);
  n_righe=atoi(argv[2]);

  if (in.fail()) {
    cerr<<"Errore apertura file"<<endl;
    exit(1);
  }

  char ** output = new char *[MAXRIGA];
  char riga [MAXRIGA];
  int i;

  for (i = 0; in.getline(riga,MAXRIGA) && i < n_righe; i++) {

    output[i]= new char[strlen(riga+1)];

    for (int k = 0; k < strlen(riga); k++) {
      if (k%2==0 && riga[k]!='\t' && riga[k]!=' ') {
        riga[k]='*';
      }
      else if (k%2==1 && riga[k]!='\t' && riga[k]!=' ') {
        riga[k]='+';
      }
    }
    strcpy(output[i],riga);
    //cout << riga <<endl;
    //cout << output[i]<<endl;
  }

  for (int j = i-1; j >= 0; j--) {
      out <<output[j]<<endl;;
  }
  delete[] output;

}
