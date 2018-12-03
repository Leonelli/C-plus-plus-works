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
  if(strlen(s)==0){
    strcat(t,"");
  }
  else{
    char tmp[2] = {caesar(s[0]), '\0'};
    strcat(t, tmp);
    codifica(t,s+1);
  }
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
