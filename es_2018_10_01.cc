using namespace std;

#include <iostream>

int massimo(){
//dati due interi a e b
//stampare a video 1 se a > b, 0 altrimenti
  bool semaforo;
  int a,b;
  cout << "inserisci un intero: ";
  cin >> a;
  cout << "inserisci un intero: ";
  cin >> b;
//NOTA BENE!!
  semaforo = (a>b);
//NOTA BENE!!
  cout << "a > b? ";
  cout << semaforo << endl;
  return 0;
}


int AND(){
  //stampare a video tutti i possibili risultati dell'operazione
  //a && b dove a e b sono due variabili booleani
  bool a,b;
  a=true,b=true;
  cout << "a: " << a << " ,b: " << b << " ,a&&b: " <<  (a&&b) <<endl;

  a=false,b=true;
  cout << "a: " << a << " ,b: " << b << " ,a&&b: " <<  (a&&b)<<endl;

  a=true,b=false;
  cout << "a: " << a << " ,b: " << b << " ,a&&b: " <<  (a&&b)<<endl;

  a=false,b=false;
  cout << "a: " << a << " ,b: " << b << " ,a&&b: " <<  (a&&b)<<endl;

  return 0;
}

int OR(){
  //stampare a video tutti i possibili risultati dell'operazione
  //a || b dove a e b sono due variabili booleani
  bool a,b;
  a=true,b=true;
  cout << "a: " << a << " ,b: " << b << " ,a||b: " <<  (a||b) <<endl;

  a=false,b=true;
  cout << "a: " << a << " ,b: " << b << " ,a||b: " <<  (a||b)<<endl;

  a=true,b=false;
  cout << "a: " << a << " ,b: " << b << " ,a||b: " <<  (a||b)<<endl;

  a=false,b=false;
  cout << "a: " << a << " ,b: " << b << " ,a||b: " <<  (a||b)<<endl;

  return 0;
}


int MaggioreDi3Elementi(){
  //dati due interi a , b e c
  //stampare a video 1 se a è il maggiore, 0 altrimenti
  bool semaforo;
  int a,b,c;
  cout << "inserisci un intero: ";
  cin >> a;
  cout << "inserisci un intero: ";
  cin >> b;
  cout << "inserisci un intero: ";
  cin >> c;
  //NOTA BENE!!
  semaforo = (a>b)&&(a>c);
  //NOTA BENE!!
  cout << "a > b e a > c? ";
  cout << semaforo << endl;
  return 0;
}

int temperatura(){
  //dato in input il valore della temperatura
  //in Gradi F calcolare il corrispondente valore in gradi Celsius
  //C=(F-32)/1.8
  float C,F;
  cout << "Inserisci la temperatura in gradi F: ";
  cin >> F;
  C = (F-32)/1.8;
  cout << "Temperatura in gradi C: "<< C << endl;
  return 0;
}

int changeColor(){
  cout << "\033[1;31mbold red text\033[0m\n";
  return 0;
}

int IVA(){
  //dato in input il prezzo di un dispositivo
  //calcolare e stampare a video il valore del prezzo
  //con IVA (IVA al 22%)
  float prezzo,prezzo_ivato;
  const float c_iva = 22/100.0;
  cout << "Inserisci il prezzo: ";
  cin >> prezzo;
  prezzo_ivato += (prezzo*c_iva) + prezzo;
  cout << "il prezzo con l'iva è: " << prezzo_ivato <<endl;
  return 0;
}


int main(){
  //int max = massimo();
  //int operaore_and = AND();
  //int operaore_or = OR();
  //int max3 = MaggioreDi3Elementi();
  //int tempF = temperatura();
  //int colorConsole=changeColor();
  int iva= IVA();
  return 0;
}
