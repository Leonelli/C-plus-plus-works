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
//Stampa n * a video e torna a capo
// n numero intero acquisto da tastiera

int main() {
  int max = asterisco();
  return 0;
}
