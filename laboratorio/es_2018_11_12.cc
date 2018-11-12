using namespace std;
#include <iostream>
#include <cmath>

//DICHIARAZIONE FUNIONE specigicando nome,paramentri, valore restituito


float radq(float);
float radqModulo(float);
float radq_rif(float,bool&);
float radq_punt(float,bool*);

void sfera(float,float&,float&);
void sfera_punt(float,float*,float*); //per casa!


int main() {
  /*float n,ris;
  bool negativo;
  cout << "inserire un numero: ";
  cin >> n;
  //cout << "risultato: " << radq_punt(n, &negativo) << endl;
  ris=radq_rif(n, negativo);
  if (negativo) {
    cout<<  "Valore negativo" <<endl;
  }
  else {
    cout << "risultato: " << ris << endl;
  }*/

  /*float raggio,sup,vol;
  cout << "inserire raggio sfera: ";
  cin >> raggio;
  if (raggio>0) {
    sfera(raggio, sup,vol);
    cout << "raggio: " << raggio << endl
    << "superficie" << sup <<endl
    << "vol: "<< vol << endl;
  }
  else
    cout << "raggio negativo." << endl;*/

    float raggio,sup,vol;
    cout << "inserire raggio sfera: ";
    cin >> raggio;
    if (raggio>0) {
      sfera_punt(raggio, &sup,&vol);
      cout << "raggio: " << raggio << endl
      << "superficie: " << sup <<endl
      << "vol: "<< vol << endl;
    }
    else
      cout << "raggio negativo." << endl;

  return 0;
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

float radq_rif(float numero, bool &negativo){
  float risultato=0.0;

  if (numero >= 0) {
    negativo = false;
    risultato = sqrt(numero);
  }
  else{
    negativo = true;
  }
  return risultato;

}

float radq_punt(float numero, bool *negativo){
  float risultato=0.0;

  if (numero >= 0) {
    *negativo = false;
    risultato = sqrt(numero);
  }
  else{
    *negativo = true;
  }
  return risultato;
}

void sfera(float r,float &superficie,float &volume)
{
  superficie= 4*M_PI*pow(r,2);
  volume= (4*M_PI*pow(r,3))/3;
}

void sfera_punt(float r,float *superficie,float *volume)
{
  *superficie= 4*M_PI*pow(r,2);
  *volume= (4*M_PI*pow(r,3))/3;
}


//implementare una funzione che preso ui numero, solo se positivo faccia la radice
