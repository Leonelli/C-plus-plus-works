using namespace std;
#include <iostream>

int stampaChar(){
  //acquisire da tastiera un carattere e stamparlo a video
  char c;
  cout << "Inserisci un carattere: ";
  cin  >> c;
  cout << "Il carattere che hai inserito è: " << c <<endl;
  return 0;
}

int stampaAscii(){
  //acquisire da tastiera un carattere e stamparlo a video
  //la sua codifica ASCII
  char c;
  cout << "Inserisci un carattere: ";
  cin  >> c;
  cout << "Il carattere che hai inserito è: " << int(c) <<endl;
  return 0;
}

int stampaAscii2(){
  //acquisire da tastiera un carattere e stamparlo a video
  //la sua codifica ASCII
  char c;
  cout << "Inserisci un carattere: ";
  cin  >> c;
  int ascii = c;
  cout << "Il carattere è: " << c << endl;
  cout << "La codifica è: " << ascii << endl;
  return 0;
}

int minMaiusc(){
  //acquisire da tastiera un carattere minuscolo
  //convertirlo in maiuscolo
  //e stamparlo a video
  int delta = 32;
  char c;

  cout << "Inserisci un carattere: ";
  cin  >> c;

  char newc = c - ('a' - 'A');
  //char newc = c - delta; //funziona comunque MA è SBAGLIATO
  cout << "Carattere originale: " << c << endl;
  cout << "Carattere convertito: " << newc << endl;
  return 0;
}

int maiuscMin(){
  //acquisire da tastiera un carattere maiuscolo
  //convertirlo in minuscolo
  //e stamparlo a video

  int delta = 32;
  char c;

  cout << "Inserisci un carattere: ";
  cin  >> c;

  char newc = c + ('a' - 'A');
  cout << "Carattere originale: " << c << endl;
  cout << "Carattere convertito: " << newc << endl;
  return 0;
}

char crypta(char c){
  c = c + 3;
  return c;
}

char decrypta(char c){
  c = c - 3;
  return c;
}

int crypto(){
  //acquistarlo da tastiera un carattere, criptarlo,
  //decriptarlo e stamparlo a video

  char c;

  cout << "Inserisci un carattere: ";
  cin  >> c;

  //criptarlo
  //char criptato = c+3;
  char criptato = crypta(c);

  //decriptarlo
  //char decripato = criptato - 3;
  char decripato = decrypta(criptato);

  //stampa
  cout << "Carattere originale: " << c << endl;
  cout << "Carattere criptato: " << criptato << endl;
  cout << "Carattere decripato: " << decripato << endl;
  if (c == decripato) {
    cout << "Corretto" << endl;
  }
  else
  cout << "errato" << endl;

  return 0;
}


int divisione(){
  //acquisire da tastiera due numeri reali
  //calcolare il quiozientras tra questi due numeri
  //CONTROLLARE DI NON FARE UNA DIVISIONE PER ZERO
  float dividendo,divisore;
  cout << "Dividendo: ";
  cin >>dividendo;
  cout << "Divisore: ";
  cin >>divisore;

  if (divisore==0) {
    cout<<"divisione per zero impossibile"<<endl;
  }
  else{
    float quoziente=dividendo/divisore;
    cout << "Il risultato è: " << quoziente << endl;
  }
  return 0;
}

int maxtra2(){
  //acquisireda tastiera due numeri reali
  //trovare il massimo tra questi due numeri e stamparlo a Dividendo
  float a,b;
  cout << "Inserisci un muero reale: ";
  cin >>a;
  cout << "Inserisci un muero reale: ";
  cin >>b;
  if (a==b) {
    cout << "Il due numeri sono uguali" << endl;
  }
  else if (a>b) {
    cout << "Il massimo è a: " << a << endl;
  }
  else {
    cout << "Il massimo è b: " << b << endl;
  }
  return 0;
}


int main() {
  //int stampa = stampaChar();
  //int ascii = stampaAscii();
  //int ascii2 = stampaAscii2();
  //int toUpChar=minMaiusc();
  //int tolowChar = maiuscMin();
  //int criptchar = crypto();
  //int div = divisione();
  int max = maxtra2();
  return 0;
}
