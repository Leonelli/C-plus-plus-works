using namespace std;
#include <iostream>
#include <cmath>

//DICHIARAZIONE FUNIONE specigicando nome,paramentri, valore restituito


float radq(float);
float radqModulo(float);


int main() {
  float n;
  cout << "inserire un numero: ";
  cin >> n;
  cout << "risultato di |"<<n<<"| : " << radqModulo(n) << endl;
}

//DEFINIZIONE FUNZIONE
float radq(float numero){
  float risultato=0.0;
  risultato = sqrt(numero);
  return risultato;
}

float radqModulo(float numero){
  float risultato=0.0;
  risultato = sqrt(fabs(numero));
  return risultato;
}

//implementare una funzione che preso ui numero, solo se positivo faccia la radice
