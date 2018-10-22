using namespace std;
#include <iostream>
#include <cmath>


int maxDiDieciDo(){
  //usando il while trovare il massimo tra 10 numeri reali inseriti da tastiera
  float max, numero;
  int contatore=0;
  cout << "Insceisci un numero: ";
  cin >> numero;
  max=numero;

  do {
    cout << "Insceisci un numero: ";
    cin >> numero;
    if (numero>max) {
      max=numero;
    }
    contatore++;
  } while(contatore<9);

  cout << "il massimo è: " << max << endl;
  return 0;
}


//Stampa n * a video e torna a capo
// n numero intero acquisto da tastiera
int asterisco(){
  int numero;
  cout << "Insceisci un numero intero: ";
  cin >> numero;

  for (int i = 0; i < numero; i++) {
    cout << "* ";
  }
  cout << endl;
  return 0;
}

//stampa n asterischi a video uno sotto l'altro
int asteriscoCapo(){
  int numero;
  cout << "Insceisci un numero intero: ";
  cin >> numero;

  for (int i = 0; i < numero; i++) {
    cout << "* "<< endl;
  }
  return 0;
}

int asteriscoDiagonale(){
  int numero;
  cout << "Insceisci un numero intero: ";
  cin >> numero;

  for (int i = 0; i < numero; i++) {
    for (int j=0; j < i; j++) {
      cout << "- ";
    }
    cout << "* "<< endl;
  }
  return 0;
}

int asteriscoDiagonaleContraria(){
  int numero;
  cout << "Insceisci un numero intero: ";
  cin >> numero;

  for (int i = numero; i > 0; i--) {
    for (int j=i-1; j > 0; j--) {
      cout << "- ";
    }
    cout << "* "<< endl;
  }
  return 0;
}

//dato m il valore di una base e n il valore di un esponenete
// calcolare m elevato alla n (interi)
int potenza(){
  int m,n;
  int risultato=1;
  cout<<"inserire base: ";
  cin >> m;
  cout<<"inserire esponente: ";
  cin >> n;

  for (int i = 0; i < n; i++) {
    risultato*=m;
  }
  cout << m << "^" << n << " = " << risultato << endl;
  return 0;
}

//ln(1+x) = sommatoria da 1 ad infinito di: (-1)^n+1 * (x^n/n) per -1<x<1
//usando la formula di taylor approssimare, preso in input da tastiera il valore reale di x
// calcolare l'approssimazione di ln(1+x) con tutti i controlli necessari
//sono ammesse le funzioni della librearia cmath
//per verificare l'approssimazione di ln è ammesso l'uso della calcolrice di sistema

int taylor(){
  float risultato,x=-2;
  int limite;
  //while (x<=-1 || x>=1)
  while (fabs(x)>=1)
  {
    cout<<"inserire il valore di x (-1<x<1): ";
    cin >> x;
  }
  cout<<"Inserire il numero di passi della sommatoria (n>1): ";
  cin >> limite;

  for (int n = 1; n <= limite; n++) {
    risultato+= pow(-1,(n+1)) * (pow(x,n)/n);
  }

  cout << "Il risulatoto di ln(1 + " << x << ") è: "  << risultato << endl;
  return 0;
}

//stampare a video i primi n elementi della serie di fibonacci
//dove n è un intero acquisito da tastiera
//1 1 2 3 5 8 ...
int fibonacci(){
  int limite,risultato_precedente=0;
  cout << "Inserisci un numero di elementi: ";
  cin >> limite;
  int risultato=1;
  int fibo;
  cout << risultato << " ";

  for (int i = 0; i < limite; i++) {
    fibo = risultato + risultato_precedente;
    risultato_precedente=risultato;
    risultato=fibo;
    cout << fibo << " ";
  }
  cout << endl;

return 0;
}

int fibonacci2(){
  int limite,risultato_precedente=0;
  int risultato=1;
  int fibo;

  cout << "Inserisci un numero di elementi: ";
  cin >> limite;

  if (limite>=1) {
    cout << "1 ";
    if (limite>=2) {
      cout << "1 ";
      if (limite>=3) {
        for (int i = 2; i < limite; i++) {
          fibo = risultato + risultato_precedente;
          risultato_precedente=risultato;
          risultato=fibo;
          cout << fibo << " ";
        }
      }
    }
  }
  cout << endl;
return 0;
}


int main() {
  int max = fibonacci2();
  return 0;
}
