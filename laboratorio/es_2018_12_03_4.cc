using namespace std;
#include <iostream>
#include <cstring>

//echo stringa | ./a.out

const int LUNGHEZZA = 256;

void codifica(char t[], const char s[]);
char caesar(char c);


int main(int argc, char* argv[]){
  char sorgente[LUNGHEZZA], destinazione[LUNGHEZZA];
  cin.getline(sorgente,LUNGHEZZA);
  codifica(destinazione,sorgente);
  cout <<"sorgente: \t"<< sorgente << endl;
  cout << "destinazione : \t" << destinazione << endl;
  return 0;
}

void codifica(char t[], const char s[]){
  int i;
  for (i = 0; i < strlen(s); i++) {
    t[i]=caesar(s[i]);
  }
  t[i]='\0';
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
