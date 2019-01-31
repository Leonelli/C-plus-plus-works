using namespace std;
#include <iostream>
#include <fstream>
#include <cstring>

int main(int argc, char *argv[]){
  if (argc!=2) {
    cerr << "Sintassi: ./a file";
    exit(1);
  }
  fstream in;
  in.open(argv[1],ios::in);
  if (in.fail()) {
    cerr<<"Errore nell'apertura del file";
    exit(2);
  }
  char line[255];

  while (!in.fail()) {
    in.getline(line,256);
    cout << line << endl;

    if (strchr(line,'@')!=strrchr(line,'@')) {
      cout << "indirizzo non valido";
    }
    else{

    //cout << "sottostringa" <<endl;
    char first[256]="";
    char second[256]="";
    char c;

    int posAt=strlen(line)-strlen(strchr(line,'@'));
    //cout << "posAt: " <<posAt<<endl;
    cout << "nome: "<< strncpy(first,line,posAt)<<endl;
    //cout << "dominio: " << strncpy(second,line,posAt)<<endl;

    if(strlen(first)>=2) cout << "lunghezza nome: ok" <<endl;
    cout <<endl;
    cout << first.get(c);

    }

  }
}
