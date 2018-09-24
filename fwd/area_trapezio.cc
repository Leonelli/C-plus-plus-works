
// Primo programma.
// Stampa la stringa Hello sul terminale.
//

#include <iostream>
using namespace std;

int main()
{
  int base_min, base_max, altezza;
  float   area;
  cout << "Dammi la base minore: ";
  cin >> base_min;
  cout << "Dammi la base maggiore: ";
  cin >> base_max;
  cout << "Dammi l'altezza ";
  cin >> altezza;
  area = (base_min + base_max)*altezza/2.0;
//  cout << "Dammi l'altezza: ";
  //cin >> altezza;
  //area = float (base * altezza) /2; (cast)
  //area = temp /2;
  cout << "L'area del trapezio e' " << area << endl;
  return 0;
}
