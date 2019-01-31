using namespace std;

#include <iostream>
#include <fstream>

int main(int argc, char * argv[]){

  fstream in;
  char line[81];

    // Controllo argomenti passati in ingresso
    if (argc != 2) {
      cerr << "Sintassi: ./a.out <in>." << endl;
      exit(EXIT_FAILURE);
    }
    // Tentativo di apertura file di input
    in.open(argv[1], ios::in);
    if (in.fail()) {
      cerr << "Il file " << argv[1] << " non esiste o non e’ accessibile.\n";
      exit(EXIT_FAILURE);
    }


  in.close();
  return 0;
}
