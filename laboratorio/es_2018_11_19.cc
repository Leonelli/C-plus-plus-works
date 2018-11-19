using namespace std;
#include <iostream>
#include <cmath>

//DICHIARAZIONE FUNIONE specigicando nome,paramentri, valore restituito
void stampa(char,char);
int contaCifre(long n);
int conta(long n);
void media(long s, int ctr);
int tribonacci(int n);
void stampa_inverti();
bool palindroma();

int main(){
  /*
  char a,b;
  do{
    cout << "Introdurre prima e ultima lettera da stampare: ";
    cin >> a >> b;
  }while(a < 'a' || b > 'z' || a>b);
  stampa(a,b);
  */

  /*int n;
  cout << "inserisci un numero: ";
  cin >> n;
  cout << contaCifre(n)<<endl;*/

  /*media(0l, 0);*/


  /*int n;
  cout << "Dammi un numero: ";
  cin >> n;
  cout << "T(" << n << ") = " << tribonacci(n) << endl;*/

  cout << "Immettere la  parola da invertire: ";
  if(palindroma())
    cout  <<"stringa palindroma" << endl;
  else
    cout  <<"stringa NON palindroma" << endl;
  return 0;
}

bool palindroma(){
  char x,y;
  bool pal=false;
  cin.get(x);
    //leggi fino al punto
    if (x =='.') {
      return true;
    }
    else if(palindroma())
    {
      cin.get(y);
      pal = (x==y);
    }
  return pal;
}

void stampa_inverti(){
char a;
cin.get(a);
  if (a != '\n') {
    stampa_inverti();
    cout << a;
  }
}

int tribonacci(int n){
  int res;
  if (n==1 || n == 2) {
    res = 1;
  }
  else if(n==0){
    res = 0;
  }
  else{
    res = tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
  }
  return res;
}




void media(long s, int ctr){
  int n;
  char c;
  cout << "inserisci un numero per continare";
  cin >> n;
  s+=n;
  ctr++;
  cout << "Media parziale: " << s/(double)ctr << endl;
  cout << "vuoi continuare? [s|n]";
  cin >> c;
  if (c=='s' || c=='S') {
    media(s,ctr);
  }
}



void stampa(char a,char b){
  if (a > b) {
    //caso base
    cout <<  endl;
  }
  else
  {
    cout << a << endl;
    //passo induttivo
    stampa(a+1,b);
  }
}


int contaCifre(long n){ //RIFARE!
  int res;
  if (n<10) {
    res=1;
  }
  else{
    res = contaCifre(n/10)+1;
  }
  return res;
}
