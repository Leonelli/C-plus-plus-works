using namespace std;
#include <iostream>
#include <cmath>

int radice(){
  float radice,risultato;
  cout << "Inserisci un numero: ";
  cin >> radice;
  risultato = sqrt(radice);
  cout << "la radice è: " << risultato << endl;
  return 0;
}

int eq2gr(){
  //presi tre numeri interi corrispondenti ai coefficienti
  //a,b,c di un polinomio di secondo grado
  //calcolare le radici di questo polinomio
  int a,b,c;
  float risult1,risult2,delta;
  cout << "scrivimi i termini dell'equazione (senza x) \n";
  cout << "ax^2: ";
  cin >> a;
  cout << "bx: ";
  cin >> b;
  cout << "c: ";
  cin >> c;
  delta = (b*b) - (4*a*c);
  cout << "delta: "<< delta << endl;
  if (a!=0) {
    if(delta>0 || delta == 0){
      risult1=  ((-b) + sqrt(delta))/(2*a);
      risult2=  ((-b) - sqrt(delta))/(2*a);
      cout << "x1 :" <<risult1 << endl;
      cout << "x2 :"<< risult2 << endl;
    }
    else{
      cout <<"equazione non ha soluzioni" << endl;
    }
  }
  else
    cout <<"equazione impossibile" << endl;

  return 0;
}


int main() {
  //int rad = radice();
  int eq2 = eq2gr();
  return 0;
}
