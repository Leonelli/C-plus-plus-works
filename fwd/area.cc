
// Primo programma.
// Stampa la stringa Hello sul terminale.
//

#include <iostream>
using namespace std;

int main()
{
  int altezza, base, area;
  cout << "Dammi la base e l'altezza: ";
  cin >> base >> altezza;
//  cout << "Dammi l'altezza: ";
  //cin >> altezza;
  area = base * altezza;
  cout << "L'area del rettangolo e' " << area << endl;
}
