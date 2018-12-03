using namespace std;
#include <iostream>


void stampaArray(const char array[], int dim);
bool inserisci(char array[], int &dim, char elemento);
const int SIZE = 1000;

int main(){
  char array[SIZE];
  int dim = 0;
  char comando;
  do {
    stampaArray(array,dim);
    cout << "Introdurre comando: ";
    cin >> comando;
    switch (comando) {
      case 'i': case 'I':
        char elemento;
        cout << "Inserisci un elemento: ";
        cin >> elemento;
        if (!inserisci(array,dim,elemento)) {
          cout << "Errore, non c'è più spazio nell'array!" <<endl;
        }
      break;
    case 'e': case 'E': break;
    default:
      cout << "Comando sbagliato, comandi validi: i,e"<<endl;
        break;
    }
  } while(comando!='e');
  return 0;

}

void stampaArray(const char array[], int dim){
  for (int i = 0; i < dim; i++) {
    cout << array[i];
  }
  cout << endl;
}

bool inserisci(char array[], int &dim, char elemento){
    bool ritorno= false;
    if (dim<SIZE) {
      int i;
      for ( i = 0; i < dim && array[i]<elemento; i++) {
        dim++;
      }
      for (int j = dim; j > i; j--) {
        array[j]=array[j-i];
      }
      array[i]= elemento;
      ritorno=true;
    }
    return ritorno;
}
