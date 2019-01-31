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

  char * riga[DIMRIGA+1];

  //caso pari
    if (nrighe%2==0) {
      cout << "righe pari"<<endl;
      for (int i = nrighe-1; i >= 0 ; i--) {
        in.getline(riga,DIMRIGA);
        if (i%2!=0) {
          cout<<riga<<endl;
        }
      }
    }
    //caso dispari
    else if(nrighe%2!=0){
      cout << "righe dispari"<<endl;
      int j=0
      for (int i = nrighe-1; i >= 0 ; i--) {
        in.getline(riga[j],DIMRIGA);
        j++;
        if (i%2!=0) {
          cout<<riga<<endl;
        }
      }
    }


  in.close();
  out.close();
  return 0;
}
