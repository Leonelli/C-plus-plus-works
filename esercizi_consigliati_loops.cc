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


int main(){
  //  int fibo=fibonacci();
  //int ser=serie();
  int potenza=power();
  return 0;
}
