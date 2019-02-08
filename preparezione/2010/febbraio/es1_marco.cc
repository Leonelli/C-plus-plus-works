using namespace std;

#include <fstream>
#include <iostream>
#include <cstdlib>
#include <cstring>

int main(int argc, char* argv[]){
  fstream in;
  char cifra[4];
  bool res=true;
  if(argc!=2){
    cerr << "Errore di sintassi!" << endl;
    exit(0);
  }
  in.open(argv[1],ios::in);
  if(in.fail()){
    cerr << argv[1] << " non presente in questa directory!";
    exit(0);
  }
  in >> cifra;
  int c=0,quanti=0;
  while(in >> cifra){
    res=true;
    for(int i=0; i<=3&&res==true; i++){
      if(cifra[i]>='0'&&cifra[i]<='9'){
        res=true;
      }
      else{
        res=false;
        c=0;
      }
    }
    if(res==true){
      c++;
    }
    if(c==4&&res==true){
      c=0;
      quanti++;
    }
    //
  }
  cout << "Il numero di stringhe trovate compatibili con il formato richiesto è " << quanti << endl;
  in.close();
  return 0;
}
