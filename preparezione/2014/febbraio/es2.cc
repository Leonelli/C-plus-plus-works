using namespace std;
#include <iostream>


const int MAXDIM=80;
char * estrai(char * stringa);
char * maiuscole (char * stringa,int i,char * out,int k,int dim);

int main(){
  char * stringa=new char[MAXDIM];
  cout << "stringa: ";
  cin >>stringa;

  stringa = estrai(stringa);

  cout << "Risultato: "<<stringa<<endl;

  return 0;
}


char * estrai(char stringa[]){
  //cout << stringa;
  char * out= new char[MAXDIM];
  stringa =  maiuscole (stringa,0,out,0,MAXDIM);
  return out;
}

char * maiuscole (char * stringa,int i,char * out,int k,int dim){
  if (i>=dim||stringa[i]==' ') {
    return stringa;
  }
  else{
    if (stringa[i]>='A'&&stringa[i]<='Z') {
      out[k] = stringa[i];
      k++;
    }
    i++;
    maiuscole(stringa,i,out,k,dim);
  }
}
