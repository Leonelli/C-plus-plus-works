using namespace std;
#include <iostream>
#include <fstream>
#include <cstring>

int main(int argc, char * argv[]){
  fstream in,out;
  char caratteri [] = {'.','?','!'};
  if (argc != 3) {
    cerr << "./a.out testo testocorretto"<<endl;
    exit(1);
  }

  in.open(argv[1],ios::in);
  out.open(argv[2],ios::out);
  if (in.fail()) {
    cerr << "Erorre in apertura del file"<<endl;
    exit(1);
  }

  char parola[31];
  in >> parola;
  if (parola[0]>='a' && parola[0]<='z') {
    parola[0]=parola[0]+ ('A'-'a');
  }

  while (!in.eof()) {
    out<<parola<< " ";
    if (parola[strlen(parola)-1]=='.'||parola[strlen(parola)-1]=='!'||parola[strlen(parola)-1]=='?') {
      in>>parola;
      if (!(parola[0]>='A' && parola[0]<='Z')) {
        parola[0]=parola[0]+('A'-'a');
      }
    }
    else
    {
      in >> parola;
    }
  }
  out << endl;


  in.close();
  out.close();
  return 0;
}
