using namespace std;
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>


char * codifica(char t[]);
char caesar(char c);

const int LUNGHEZZA=256;
int main ()
{
  char sorgente[LUNGHEZZA],* destinzione;
  cout << "Introdurre stringa da codificare: ";
  cin.getline(sorgente,LUNGHEZZA);
  cout << sorgente <<endl;
  int arraylenght = strlen(sorgente);
  cout << arraylenght <<endl;
  destinazione = codifica(sorgente);
  cout << "res: "<<destinzione<<endl;
  delete [] destinzione;
  return 0;
}

char * codifica(char t[]){
  int i, lun = strlen(t);
  char* s=new char[lun+1];
  for (i = 0; i < lun; i++) {
    s[i]=caesar(t[i]);
  }
  s[i]='\0';
  return s;
}
char caesar(char c){
    if (isalpha(c)) {
      if (islower(c)) {
        c=(c - 'a' + 3) % ('z' - 'a') + 'a';
      }
      else{
        c=(c - 'A' + 3) % ('z' - 'a') + 'A';
      }
    }
  return c;
}
