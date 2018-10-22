using namespace std;
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <limits.h>

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


int main() {
  int max = potenza();
  return 0;
}
