/*1) Scrivere un programma che risolva un'equazione di 2 grado
nei reali

2) Scrivere un programma che risolva un'equazione di 2 grado,
dando anche le soluzioni complesse

3) Scriver un programmino che chieda una carattere descrivente una lingua
(es: 'i'= italiano, 'e'=inglese, ecc.) e scriva "buon giorno"
nella lingua prescelta. Usare l'istruzione switch.

4) Scrivere un programma che "indovini" un numero tra 0 e 7
facendo una serie di domande del tipo "s/n" all'utente. */

using namespace std;
#include <iostream>
#include <math.h>       /* sqrt */


int eq2gr(){
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

int eqcompl(){
  int a,b,c;
  float risult1,risult2,delta;
  cout << "scrivimi i termini dell'equazione (senza x) \n";
  cout << "az^2: ";
  cin >> a;
  cout << "bz: ";
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
      // dare le soluzioni complesse!!
    }
  }
  else
    cout <<"equazione impossibile" << endl;

  return 0;

}


int lingua(){
  char lingua;
  cout << "inserisci una lingua (es [i]): ";
  cin >> lingua;
  switch (lingua) {
    case 'i':
      cout << "Buongiorno" <<endl;
      break;
    case 'e':
      cout << "Good morning"<<endl;
      break;
    case 'd':
        cout << "guten tag"<<endl;
        break;
    default:
        cout <<   "Lingua sconociuta"<<endl;
        break;
  }
  return 0;
}

int numero(){
  int numero,ideanumero=4;
  bool indovinato=false;
  char risposta;
  cout << "inserisci un numero tra 0 e 7: ";
  cin >> numero;

  while(indovinato==false){
    cout<< "il numero è "<<ideanumero<<"? [s|n]: ";
    cin >> risposta;
    if (risposta=='s') {
      indovinato=true;
    }
    else{
      cout<< "il numero è maggiore di "<<ideanumero<<"? [s|n]: ";
      cin >> risposta;
      if (risposta=='s') {
        ideanumero++;
      }
      else{
        ideanumero--;
      }
    }
  }
  cout << "numero programma: " << ideanumero << "; numero utente: " << numero <<endl;
}

int main(){
  //int eq=eq2gr();
  //int ling=lingua();
  //int indovina=numero();
  int complessi = eqcompl();
  return 0;
}
