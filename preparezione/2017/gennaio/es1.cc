using namespace std;
#include <iostream>
#include <cstring> //SOLO: strcmp
#include <fstream>

int main(int argc, char const *argv[]) {
  if (argc != 4) {
    cerr << "./a.out <file_input_a> <file_input_b> <file_output>"<<endl;
    exit(0);
  }

  fstream in1,in2,out;
  in1.open(argv[1],ios::in);
  in2.open(argv[2],ios::in);
  out.open(argv[3],ios::out);

  if (in1.fail() || in2.fail()) {
    cerr << "Errore nell'apertura dei file"<<endl;
    exit(1);
  }

  char parola_chiave [] = "INCLUDI";
  const int MAXDIM = 255;
  char * riga = new char [MAXDIM];
  char * riga2 = new char [MAXDIM];

  //char ** testo2 = new char*[MAXDIM];

  //int i=0;
/*  while (in2.getline(riga2,MAXDIM)) {
    testo2[i]= new char[MAXDIM];
    strcpy(testo2[i],riga2);
    cout << testo2[i]<<endl;
    i++;
  }*/
  in2.close();


  while (in1.getline(riga,MAXDIM+1)) {
    out << riga << endl;
    if (strcmp(riga,parola_chiave)==0) {
      in2.open(argv[2], ios::in);
      while (in2.getline(riga2,MAXDIM+1)) {
        out << "       "<<riga2 << endl;
      }
      in2.close();
    }
  }


  in1.close();
  in2.close();
  out.close();

  return 0;

}
