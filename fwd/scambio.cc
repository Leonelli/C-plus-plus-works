
// Primo programma.
// Stampa la stringa Hello sul terminale.
//

#include <iostream>
using namespace std;

int main()
{
  int cassetto, armadio, cesto;
  cout << "Inserisci due numeri: ";
  cin >> cassetto >> armadio;

  cesto = cassetto;
  cassetto = armadio;
  armadio = cesto;
  cout << "I numeri inseriti (scambiati ;) ) sono " << cassetto << " e " << armadio << endl;

}
