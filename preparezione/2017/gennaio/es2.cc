using namespace std;
#include <iostream>

const int MAXDIM = 80;
char * estrai(char parola[]);
char * wrapper(char * parola, int i, char * out,int j);

int main(){
  char * parola= new char[MAXDIM];
  cout <<"parola: ";
  cin.getline(parola,MAXDIM+1);
  parola = estrai(parola);
  cout << parola<<endl;
  return 0;
}


char * estrai(char parola[]){
  char * out = new char[MAXDIM];
  out = wrapper(parola,0,out,0);
  return out;
}

char * wrapper(char * parola, int i, char * out,int j){
  if (parola[i]=='\0') {
    return out;
  }
  else{
    if (parola[i]>='A' && parola[i]<='Z') {
      out[j]=parola[i];
      j++;
    }
    i++;
    wrapper(parola, i,out, j);
  }
}
