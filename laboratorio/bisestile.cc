using namespace std;
#include <iostream>

void leggiAnno(int*);
void leggiMese(int*);
void leggiGiorno(int*);
void calcola(int*,int*,int*,long*);
int bisestile(int anno);

const int anno_attuale = 2018;
const int mese_attuale = 11;
const int giorno_attuale = 19;

int main(){
  int y,m,d;
  long ris;
  /*cout << "inserisci anno, mese, giorno di nascita: ";
  cin >> y >> m >> d;

  leggiAnno(&y);
  leggiMese(&m);
  leggiGiorno(&d);
  calcola(&d,&m,&y,&ris);

  cout << ris << endl;*/
  cout << "Anno?";
  cin >> y;
  cout << bisestile(y) << endl;
  return 0;
}


void leggiAnno(int* y){
  *y = anno_attuale-*y;
}
void leggiMese(int*m){
  *m = mese_attuale-*m;
}
void leggiGiorno(int*d){
  *d= giorno_attuale-*d;
}
void calcola(int* d,int* m,int* y,long* ris){
  *ris = *d  + 30 * *m + 30*12* *y;
}

int bisestile(int anno){
  int res=0;

  if (anno > anno_attuale) {
    res = 0;
  }
  else if(anno%4 == 0 || anno%100==0){
    res = bisestile(anno+1) + 1;
  }
  else{
    res = bisestile(anno+1);
  }

  return res;
}
