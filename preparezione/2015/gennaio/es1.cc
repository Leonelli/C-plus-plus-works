using namespace std;
#include <iostream>
#include <fstream>
int main(int argc, char * argv[]){
  fstream in,out;
  char a;
  const int MAXDIM = 256;


  if (argc!=3) {
    cerr<<"./a.out input.txt output.txt"<<endl;
    exit(0);
  }

  in.open(argv[1],ios::in);
  out.open(argv[2],ios::out);

  if (in.fail()) {
    cerr<<"Errore in apertura del file"<<endl;
    exit(1);
  }

  char parola[255];
  char c;
  //lettura Parole
  while (in>>parola) {
    int contatore=0;
    for (int i = 0;parola[i]!='\0' && i < MAXDIM; i++) {
      if (parola[i] =='a') {
        contatore++;
      }
    }
    out <<contatore<<" ";
  }

  in.close();
  out.close();



  return 0;
}
