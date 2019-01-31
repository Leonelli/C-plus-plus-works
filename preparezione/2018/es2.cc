using namespace std;
#include <iostream>

  const int DIM = 81;
  // Dichiarare qui sotto la funzione estrai
  char * estrai(const char []);
  void estrai_ric(const char input[], int indice_input, char output[], int indice_output);

  int main () {
     char stringa[DIM], *estratta, risposta;
     do {
       cout << "Inserisci la stringa da controllare: ";
       cin >> stringa;
       estratta = estrai(stringa);
       cout << "La stringa estratta e’: " << estratta << endl;
       cout << "Vuoi inserire un’altra stringa? [s/n] ";
       cin >> risposta;
     } while (risposta != 'n' && risposta != 'N');
return 0; }

char * estrai(const char stringa[]){
  char * output = new char[DIM+1];
  estrai_ric(stringa,0,output,0);
  return output;
}

void estrai_ric(const char input[], int indice_input, char output[], int indice_output) {
  char c= input[indice_input];
  if (c=='\0' || indice_input==DIM) {
    output[indice_output] = '\0';
  }
  else
  {
    if (c>='A' && c<='Z') {
      output[indice_output]=c;
      indice_output++;
    }
    estrai_ric(input,indice_input+1,output,indice_output);
  }
}
