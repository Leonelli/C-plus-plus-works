using namespace std;
#include <iostream>
#include <fstream>
#include <cstring>

const int DIMRIGA = 80;


int main(int argc, char * argv[]){
  fstream in,out;
  int nrighe;

  in.open(argv[1],ios::in);
  nrighe = atoi(argv[2]);
  out.open(argv[3],ios::out);

  char riga[DIMRIGA+1];

  char** righe = new char* [nrighe];

  //in.getline(riga,DIMRIGA);
  int i;
  for(i=0;!in.eof()&& i<nrighe; i++){
    in.getline(riga,DIMRIGA);
    righe[i]=new char [strlen(riga)+1];
    strcpy(righe[i], riga);
  }

  /*for (int k = 0; k < nrighe; k++) {
    cout << righe[k]<<endl;
  }*/

  for(int j = i - 1; j >= 0; j--) {    
    if (j%2!=0) {
      out << righe[j]<<endl;
    }
    delete [] righe[j];
  }

  in.close();
  out.close();
  return 0;

}
