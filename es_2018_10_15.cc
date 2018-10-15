using namespace std;
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <limits.h>

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
  //cout << "delta: "<< delta << endl;
  if (a==0) {
    cout <<"equazione impossibile" << endl;
  }
  else{
    delta = (b*b) - (4*a*c);
      if(delta < 0){
        cout <<"equazione non ha soluzioni" << endl;
      }
      else{
      risult1=  ((-b) + sqrt(delta))/(2*a);
      risult2=  ((-b) - sqrt(delta))/(2*a);
      cout << "x1 :" <<risult1 << endl;
      cout << "x2 :"<< risult2 << endl;
    }
  }
  return 0;
}

int helloloop(){
  //fare un programma in c++ che stampa 'hello' gino a quando l'utente vuole
  //1. stampa di hello
  //2. stampa di domanda del tipo "vuoi continuare?"
  bool continuare;
  char risposta;
  do{
    cout << "Hello"<<endl;
    cout << "vuoi stampare ancora? [s|n]: ";
    cin >> risposta;
    if (risposta == 'n') {
      continuare=false;
    }
    else{
      continuare=true;
    }
  }while(continuare);
  return 0;
}

int helloloop2(){
  bool continua = 1; //true
  while (continua) {
    cout << "Hello"<<endl;
    cout << "vuoi stampare ancora? [1|0]";
    cin >> continua;
  }
}

int helloloop3(){
  //fare un programma in c++ che stampa 'hello' gino a quando l'utente vuole
  //1. stampa di hello
  //2. stampa di domanda del tipo "vuoi continuare?"
  bool continuare;
  char risposta='s';
  while (risposta=='s') {
    cout << "Hello"<<endl;
    cout << "vuoi stampare ancora? [s|n]: ";
    cin >> risposta;
  }
  return 0;
}

int tenHello(){
  int n=1;
  while (n<=10) {
    cout << n << ".\tHello"<<endl;
    n++;
  }
  return 0;
}

int maxDiDieci(){
  //usando il while trovare il massimo tra 10 numeri reali inseriti da tastiera
  float a;
  cout << "Insceisci un numero: ";
  cin >> a;
  int n=9;
  float max=a;

  while (n>0) {
    cout << "Insceisci un numero: ";
    cin >> a;
    if (a>max) {
      max=a;
    }
    n--;
  }
  cout << "il massimo è: " << max<<endl;
  return 0;
}

int maxDiQuantiDiciTu(){
  //usando il while trovare il massimo tra 10 numeri reali inseriti da tastiera
  int quanti;
  cout << "Insceisci quante numeri vuoi inserire: ";
  cin >> quanti;

  float a;
  cout << "Insceisci un numero: ";
  cin >> a;
  int n=9;
  float max=a;

  while (quanti>1) {
    cout << "Insceisci un numero: ";
    cin >> a;
    if (a>max) {
      max=a;
    }
    quanti--;
  }
  cout << "il massimo è: " << max<<endl;
  return 0;
}


int maxDiN(){
  //usando il while trovare il massimo tra 10 numeri reali inseriti da tastiera
  float a;
  float max = -INT_MAX;
  char continua='s';

  while (continua == 's') {
    cout << "Insceisci un numero: ";
    cin >> a;
    if (a>max) {
      max=a;
    }
    cout << "Continuare [s|n]: ";
    cin >> continua;
  }
  cout << "il massimo è: " << max<<endl;
  return 0;
}

int StampaASCII(){
  //stampare a video la tabella ASCII dalla A alla z
  //comprendente carattere e relativo valore della codifica
  int numero;
  char carattere = 'A';

  while(carattere <= 'z')
  {
    numero = carattere;
    cout << numero << "\t" << carattere << endl;
    carattere++;
  }
  return 0;
}


int main() {
  //int rad = radice();
  //int eq2 = eq2gr();
  int stampahello=StampaASCII();
  return 0;
}
