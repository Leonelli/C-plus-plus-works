using namespace std;
#include <iostream>
#include <fstream>
#include <cstring>

int main(int argc, char *argv[]){
  fstream file_input,file_output;
  int const LUNGHEZZA_RIGA = 256;
  int const LUNGHEZZA_PAROLA = 50+1;

  if (argc!=3) {
    cerr << "Sintassi: ./a.out <file_input> <file_output>"<<endl;
    exit(0);
  }

  file_input.open(argv[1],ios::in);

  if (file_input.fail()) {
    cerr<<"Errore nell'apertura del file"<<endl;
    exit(1);
  }

  int numero_parole=0;
  char parola [LUNGHEZZA_PAROLA];
  file_input >> parola;
  while (!file_input.eof() && strcmp(parola,"STOP") != 0) {
    numero_parole++;
    file_input >> parola;
  }
  file_input.close();
  file_input.open(argv[1],ios::in);
  // Alloco lo spazio per salvare le parole in memoria
  char** parole = new char* [numero_parole];
  // Secondo ciclo di lettura, per salvare il contenuto in memoria
  for(int i = 0; i < numero_parole; i++) {
    file_input >> parola;
    cout << "parola: "<< i <<" "<<parola<<endl;
    // Alloco lo spazio per ciascuna parola
    parole[i] = new char[strlen(parola)];
    strcpy(parole[i], parola);
  }
    // Chiude il file di input
    file_input.close();
    // Apertura file di output
    file_output.open(argv[2], ios::out);
    // Salvo le parole sul secondo file, in ordine inverso
    for(int i = numero_parole - 1; i >= 0; i--) {
      file_output << parole[i] << " ";
    }
    // Chiude il file di output
    file_output.close();
  return 0; }
