using namespace std;
#include <iostream>
#include <fstream>

const int MAXDIM = 80;


int main(int argc,char*argv[]){
  fstream in,out;
  char indirizzo[MAXDIM];
  char c;
  char nome[MAXDIM];
  char dominio[MAXDIM];

  if (argc != 3) {
    cerr << "errore parametri"<<endl;
    exit(0);
  }

  in.open(argv[1],ios::in);
  out.open(argv[2],ios::out);

  if (in.fail()) {
    cerr<<"Errore in apertura";
    exit(1);
  }

  while (in>>indirizzo) {
    bool at=false;
    int k=0;
    int j=0;
    bool valido=true;
    int n_at=0;
    int i;
    int last_char;
    //manca 1 sola at
    //. alla fine

    for (i = 0; indirizzo[i]!='\0'&& indirizzo[i]!=' ' && i < MAXDIM; i++) {
      if (indirizzo[i]=='@') {
          n_at++;
          at = !at;
          i++;
      }
      if (at) {
        dominio[j] = indirizzo[i];
        if (!((dominio[j]>='a'&& dominio[j]<='z')||(dominio[j]>='A'&& dominio[j]<='Z')
        ||(dominio[j]=='.')||(dominio[j]=='_')
        ||(dominio[j]>='0' && dominio[j]<='9')))
        {
          valido=false;
        }
        j++;
      }
      else{
        nome[k] = indirizzo[i];
        if (!((nome[k]>='a'&& nome[k]<='z')||(nome[k]>='A'&& nome[k]<='Z')
        ||(nome[k]=='.')||(nome[k]=='_')
        ||(nome[k]>='0' && nome[k]<='9')))
        {
          valido=false;
        }
        k++;
      }
    }
    last_char=indirizzo[i-1];
    if (k>1 && j>1 && dominio[0]!='.' && nome[0]!='.' && valido &&n_at==1 && last_char!='.') {
      out << indirizzo << endl;
      //cout<< "nome: " << nome <<" dominio: " << dominio<<endl;
    }
  }
  in.close();
  out.close();
  return 0;
}
