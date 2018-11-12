/*1) scrivere un programma che calcoli i primi 20 numeri della
successione di fibonacci:

F0=0;
F1=1;
F_n = F_{n-1}+F_{n-2}

2) scrivere un programma che prenda in ingresso un valore reale x
e calcoli (un'approssimazione del)la serie

Somma_i (-1)^i 1/(x^i)

3) scrivere un programma che prenda in ingresso un valore reale x e un intero N
e calcoli x^N come prodotto di N volte X.

4) cercare invarianti di ciclo degli esempi proposti
*/
using namespace std;
#include <iostream>
#include <cmath>


int fibonacci(){
  int totale=0;
  int F0=0;
  int F1=1;
  cout << F0 << endl;
  cout << F1 << endl;

  for (int i = 2; i < 20; i++) {
    totale = F0 + F1;
    F0=F1;
    F1=totale;
    cout << totale <<endl;
  }
  return 0;
}

int serie(){ //not sure(?)
  double x;
  double somma=0.0,ultimasomma=-1.0;
  double Eps=1.0e-3;

  cout << "Inserisci un valore reale: ";
  cin >> x;
  int i;
  for (i=0; fabs(somma - ultimasomma)>= fabs(ultimasomma*Eps); i++){
    ultimasomma=somma;
    somma += pow(-1,i)*(1.0/(pow(x,i)));
  }
  cout << somma <<endl;
  return 0;
}

int power(){
  float x;
  int N;
  float prodotto=1.0;
  cout << "Inserisci un valore reale x: ";
  cin >> x;
  cout << "Inserisci un valore intero N: ";
  cin >> N;

  for (int i = 1; i <= N; i++) {
    prodotto*=x;
  }
  cout << prodotto <<endl;
  return 0;
}

double funzioneR_R( int x){
  double risultato=0;
  if (x<=0) {
    risultato=pow(-x,3);
  }
  else if (x>0) {
    risultato=exp(x-1);
  }
  return risultato;
}


/*int main(){
  //  int fibo=fibonacci();
  //int ser=serie();
  //int potenza=power();
  double risultato;
  for (int i = -10; i <= 10; i++) {
    risultato = funzioneR_R(i);
    cout << risultato<<endl;

  }
  return 0;
}*/

void ruota(int &a, int &b, int &c){
  int tmp = a;
  a = b;
  b = c;
  c = tmp;
}

/*int main(){
    int a=1;
    int b=2;
    int c=3;
    cout << "a: " << a << ", " << "b: " << b << ", "<< "c: " << c << endl;
    ruota(a,b,c); // a=2;b=3;c=1;
    cout << "a: " << a << ", " << "b: " << b << ", "<< "c: " << c << endl;
  return 0;
}*/

void areaCerchio(float raggio){
  float area=0;
  area = raggio*raggio* M_PI;
  cout << area<<endl;
}

int Cerchio(float raggio, float &area, float &perimetro ){
  bool calcolo_possibile=0;
  area=0;
  perimetro=0;
  if (raggio>=0) {
    area = raggio*raggio* M_PI;
    perimetro = 2*M_PI*raggio;
    calcolo_possibile=1;
  }
  return calcolo_possibile;

}

int main(){
    float area=0,perimetro=0,r=3;
    int risultato = Cerchio(r,area,perimetro);
    if (risultato) {
      cout << area << " , "<< perimetro<< endl;
    }
    return 0;
}
