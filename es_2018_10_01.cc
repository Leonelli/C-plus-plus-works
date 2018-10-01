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


int main(){
  //int max = massimo();
  int operaore_and = AND();
  return 0;
}
