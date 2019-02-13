using namespace std;
#include <iostream>
#include <fstream>
#include <cstring>

const int DIMPAROLA = 50;

int main(int argc, char const *argv[]) {

  fstream in,out;
  in.open(argv[1],ios::in);
  out.open(argv[2],ios::out);

  char parola[DIMPAROLA];

  char ** testo = new char *[DIMPAROLA];
  int i;
  for(i=0 ;in>>parola && strcmp(parola,"STOP");i++) {
    testo[i]= new char [DIMPAROLA];
    //cout << parola<< " ";
    strcpy(testo[i],parola);
  }
  //cout << endl;


  for (int j = i-1; j >=0; j--) {
    out << testo[j]<< " ";
  }
  in.close();
  out.close();
  return 0;
}
