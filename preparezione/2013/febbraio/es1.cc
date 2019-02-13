using namespace std;
#include <iostream>
#include <cstdlib>
#include <fstream>

int main(int argc, char const *argv[]) {

  if (argc!=4) {
    cerr << "Errore argomenti!"<<endl;
    exit(0);
  }


  fstream in,out;
  in.open(argv[1],ios::in);
  out.open("output.txt",ios::out);
  int n_voti_file=atoi(argv[2]);
  int n_voti_out=atoi(argv[3]);

  if (in.fail()) {
    cerr << "Errore apertura file!"<<endl;
    exit(1);
  }
  char tmp[2];
  int voto;
  int vettore [n_voti_file];
  for (int i = 0; i < 8; i++) {
    in.getline(tmp,255);
    voto = atoi(tmp);
    vettore[i]=voto;
    //cout << voto <<endl;
  }

  for (int i = 0; i < n_voti_out; i++) {
    out << vettore[i]<<endl;
    cout << vettore[i]<<endl;
  }
  in.close();
  out.close();
  return 0;
}
