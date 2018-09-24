
// Primo programma.
// Stampa la stringa Hello sul terminale.
//

#include <iostream>
using namespace std;

int main()
{
  int altezza, base;
  float   area, temp;
  cout << "Dammi la base e l'altezza: ";
  cin >> base >> altezza;
//  cout << "Dammi l'altezza: ";
  //cin >> altezza;
  //area = float (base * altezza) /2; (cast)
  area = altezza * base /2.0;
  //area = temp /2;
  cout << "L'area del rettangolo e' " << area << endl;
  return 0;
}
