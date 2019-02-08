using namespace std;
#include <iostream>
#include <fstream>
#include <cstring>
int main(int argc, char * argv[]){
  fstream in1,in2,out;
  int n_righe1,n_righe2;

  if (argc!=4) {
    cerr<< "Errore parametri"<<endl;
    exit(0);
  }

  in1.open(argv[1],ios::in);
  in2.open(argv[2],ios::in);
  out.open(argv[3],ios::out);

  if (in1.fail()||in2.fail()) {
      cerr<< "Errore apertura"<<endl;
      exit(1);
  }

  in1>>n_righe1;
  cout << n_righe1<<endl;
  in2>>n_righe2;
  cout << n_righe2<<endl;


  char righe1 [255];
  char righe2 [255];

  char ** vett1= new char*[n_righe1];
  char ** vett2= new char*[n_righe2];



  char parola[255];

//memorizzo file 1 e file2 in un vettore di vettore
  for (int i = 0; i < n_righe1; i++) {
    in1>>parola;
    vett1[i] = new char[strlen(parola)];
    strcpy(vett1[i],parola);
    //cout<< vett1[i]<<endl;
  }

  cout <<endl;

  for (int i = 0; i < n_righe2; i++) {
    in2>>parola;
    vett2[i] = new char[strlen(parola)];
    strcpy(vett2[i],parola);
    //cout<< vett2[i]<<endl;
  }


for (int j = 0; j < n_righe2; j++) {
  for (int i = 0; i < n_righe1; i++) {
    if (strcmp(vett1[i],vett2[j])==0) {
      out << vett2[j] << endl;
      cout << vett2[j] << endl;
    }
  }
}
in1.close();
in2.close();
}
