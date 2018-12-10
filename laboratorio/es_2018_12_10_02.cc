using namespace std;
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>


int main (int argc, char * argv[])
{
  fstream myin,myout;
  const int LUNGHEZZA_RIGA= 256;
  const int LUNGHEZZA_PAROLA= 4;
  const char DELIMITATORI[]= " ,.;:-";

  char c;
  char s[LUNGHEZZA_RIGA];


  if (argc!=3) {
    cout << "Usage: ./a.out <sourcefile> <targetfile>\n";
    exit(0);
  }

  myin.open(argv[1],ios::in);
  if (myin.fail()) {
     cerr << "Il file " << argv[1] << " non esiste\n";
     exit(0);
  }

  myout.open(argv[2],ios::out);


  int contatore=0;

  while (!myin.eof()) {
    myin.getline(s,LUNGHEZZA_RIGA);
      //myin.get(c);
      cout << "s: "<<s <<endl;
      cout << "c: " << myin.put(c)<<endl;
      cout << "cont: " << contatore++<<endl ;



      if (strlen(s) <= LUNGHEZZA_PAROLA) {
        myout << s;
      }
      else{
        myout << "acc.";
//myout solo 4 caratteri + .
      }
      myout << endl;

    myout << " ";
    //myin.getline(s,LUNGHEZZA_RIGA);
  }
  myin.close();
  myout.close();
  return 0;
}
